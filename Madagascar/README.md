# Installation steps for madagascar

Plz check www.ahay.org

```
mkdir ~/rsf

# Dowload source from http://sourceforge.net/projects/rsf/files/

mv tarfile ~/rsf

tar -xvf tarfile

cd madagascar

./configure API=f90,c++,python --prefix=/path/to/build

# Check which libraries got "no" on the configure (it will tell you the library names)

#sudo apt-get install (FOR EACH LIBRARY)

#keep running configure again until everything is "yes"

make

make install

# Append these lines to your bashrc
# Madagascar stuff
export RSFROOT=samePrefixPath
source $RSFROOT/share/madagascar/etc/env.sh
export TMPDATAPATH=/tmp/

source ~/.bashrc

# Test
sfspike n1=500 k1=100 | sfwiggle clip=0.1 | sfpen
```


