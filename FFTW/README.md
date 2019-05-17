# Install FFTW

Download version from http://www.fftw.org/ .

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

# Enable MPI and OpenMP

TODO. This is achieved by setting more `./config` flags. See http://www.fftw.org/fftw2_doc/fftw_6.html .
