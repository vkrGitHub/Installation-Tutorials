# Install FFTW

Download version from http://www.fftw.org/ .

Always install LOCALLY, it saves a lot of time with problems. Local installation in folder is achieved by setting the 
`--prefix` flag on the `./configure` file.
```sh
tar -xzf fftw-ETC.tar.gz
cd fftw-ETC/ 
pwd            # save this path to use below in --prefix
./configure --prefix=/path/to/this/folder
make
make install
```

# Enable MPI and OpenMP

TODO. This is achieved by setting more `./config` flags. See http://www.fftw.org/fftw2_doc/fftw_6.html .
