# Install steps

Quick install:
1. Clone the repo at https://github.com/JanThorbecke/OpenSource
2. `cp Make_include_template Make_include`
3. Set the correct ROOT on make include. `pwd` on cloned folder should do:
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
4. Run `make`. This should set everything up.

More details on the manual at https://janth.home.xs4all.nl/Software/fdelmodcManual.pdf .


