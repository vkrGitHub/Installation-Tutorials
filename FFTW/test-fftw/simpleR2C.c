#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "fftw3.h"

#include "complex.h"

int main(int argc, char* argv[]){

	if(argc<2){
		printf("Incorrect number of input parameters.\n");
		printf("usage:\n %s nt\n", argv[0]);
		exit(0);
	}
	
	int nt;
	float *array;

	nt = atoi(argv[1]);
	array = (float*)malloc(nt*sizeof(float));

	for(int i=0; i<nt; i++)
		array[i] = i+1;

	int nw = nt/2 + 1;

	//float complex fouArray[3];
	float complex *fouArray;
	fouArray = (float complex*)malloc(nw*sizeof(float complex));
	memset(fouArray, 0, nw*sizeof(float complex));

	for(int i=0; i<nt; i++)
		printf("array[%d] = %f\n", i, array[i]);

	
	// Init fourier plans
	fftwf_plan plan_rc, plan_cr;
	
	// Perform fft
	plan_rc = fftwf_plan_dft_r2c_1d(nt, array, (fftwf_complex*) fouArray, FFTW_ESTIMATE);

	fftwf_execute(plan_rc);

	//print transformed res
	for(int i=0; i<nw; i++)
		printf("fouArray[%d] = %f + %fi\n", i, creal(fouArray[i]), cimag(fouArray[i]) );

	// ifft
	plan_cr = fftwf_plan_dft_c2r_1d(nt, (fftwf_complex*) fouArray, array, FFTW_ESTIMATE);
	fftwf_execute(plan_cr);

	printf("IFFT\n");
	for(int i=0; i<nt; i++)
		printf("array[%d] = %f\n", i, array[i]/nt);
	

	// Destroy fourier plans
	fftwf_destroy_plan(plan_rc);
	fftwf_destroy_plan(plan_cr);

	return 0;
}
