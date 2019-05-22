# Install FFTW

Download tar file of desired version from http://www.fftw.org/ .

Almost always we want to use FLOAT functions for FFTW. To use float FFTW functions, use the `--enable-float` flag when running  `./configure`.

Always install LOCALLY, it saves a lot of time with problems. Local installation in folder is achieved by setting the 
`--prefix` flag when running `./configure`.
```sh
tar -xzf fftw-ETC.tar.gz
cd fftw-ETC/ 
pwd            # save this path to use below in --prefix
./configure --prefix=/path/to/this/folder --enable-float
make
make install
```
These instructions set FFTW's path to the same folder of the extracted file, but a different path could have also been chosen.  
Saving the path to FFTW in a bashrc variable called `FFTWROOT` can also be helpful for future Makefiles:
```sh
#paste on ~/.bashrc

# FFTW
export FFTWROOT=/path/to/fftw/folder
```
then `source ~/.bashrc` to apply changes.

# Test FFTW

Copy the folder `test-fftw`, which consists of a `Makefile` and a `.c` to test a float FFT on an array of `nt` samples. If you exported `FFTWROOT` on your `~/.bashrc`, fill `INCSPATH` with `$(FFTWROOT)/include` and `LIBSPATH` with `$(FFTWROOT)/lib`, otherwise fill the paths manually. Then:
```sh
make
./simpleR2C.exe 4
```
should output:
```sh
array[0] = 1.000000
array[1] = 2.000000
array[2] = 3.000000
array[3] = 4.000000
fouArray[0] = 10.000000 + 0.000000i
fouArray[1] = -2.000000 + 2.000000i
fouArray[2] = -2.000000 + 0.000000i
IFFT
array[0] = 1.000000
array[1] = 2.000000
array[2] = 3.000000
array[3] = 4.000000
```

# Enable MPI and OpenMP

TODO. This is achieved by setting more `./config` flags. See http://www.fftw.org/fftw2_doc/fftw_6.html .

# Problems

If there are problems with `log, sincos, cos`, it is because some FFTW functions use the `lm` library. So a good practice is to always include `-lm` when using `-lfftw3f`.
