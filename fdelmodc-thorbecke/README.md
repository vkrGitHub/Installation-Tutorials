# Install steps

Quick install:
1. Clone the repo at https://github.com/JanThorbecke/OpenSource or download last stable version at https://janth.home.xs4all.nl/Software/Software.html . 
2. Enter OpenSource folder. If cloned from GitHub, `cp Make_include_template Make_include`
3. Set the correct ROOT on `Make_include`. Copy `pwd`'s output, paste it to `ROOT=`:
```sh
...
#   -3- on Solaris system use RANLIB=ranlib which is defined below

# the current directory (in vi ":r!pwd")
# ROOT=/Users/jan/src/OpenSource
ROOT=/home/myhome/folder/folder/OpenSource

########################################################################
# C compiler; change this only if you are using a different C-compiler
...
```

4. Set MKL path on `LD_LIBRARY_PATH`: , do not forget `$MKLROOT/lib/intel64`. Add all folders on `$MKLROOT/lib` to `$LD_LIBRARY_PATH`. Ex (vi `~/.bashrc`):
```
# MKLROOT=/opt/intel/2018/mkl
MKLROOT=/your/path/to/mkl
export LD_LIBRARY_PATH=$MKLROOT/lib/ia32:$MKLROOT/lib/ia32_lin:$MKLROOT/lib/intel64:$MKLROOT/lib/intel64_lin:${LD_LIBRARY_PATH}
```
Must also set `$MKLROOT` correctly on `Make_include`.

5. Alternative with modules: load all modules (icc, gcc, mkl, etc). On `Make_include` comment `MKROOT=` lines. No need to set `LD_LIBRARY_PATH`. Modules must be loaded before compiling and running.


6. Finally, compile. FFTlib comes first, then the rest of the modules:
```sh
cd FFTlib
make
cd ..
make
export PATH='path/to/OpenSource'/bin:$PATH
source ~/.bashrc
```
More details on the manual at https://janth.home.xs4all.nl/Software/fdelmodcManual.pdf . 

As `fdelmodc` uses Seismic Unix standards, it is better to have SU compiled without the XDRFLAG, to avoid usage of `suoldtonew` (more information at the manual).
