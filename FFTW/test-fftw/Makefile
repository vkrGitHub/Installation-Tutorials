# Make cheatsheet
#out.o: src.c src.h
#  $@   # "out.o" (target)
#  $<   # "src.c" (first prerequisite)
#  $^   # "src.c src.h" (all prerequisites)

# gcc flags cheatsheet
#-I($PATH): look for headers here (besides standard dirs). 
#-L($PATH): look for libfiles here (besides standard dirs). Only exe's need libfiles.

INCSPATH=/home/victor.ramalho/fftw-3.3.8/include
LIBSPATH=/home/victor.ramalho/fftw-3.3.8/lib

MAIN=simpleR2C

all: $(MAIN).exe

$(MAIN).exe: $(MAIN).o 
	gcc $^ -o $@ -I$(INCSPATH) -L$(LIBSPATH) -lfftw3f -lm

$(MAIN).o: $(MAIN).c
	gcc -c $< -I$(INCSPATH)


clean:
	rm *.o *.exe

