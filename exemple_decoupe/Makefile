run: a.out
	./a.out
toto:
	gcc -c plam.c -Wall
	gcc -c plim.c -Wall
	gcc -c ploum.c -Wall
	gcc *.o 
	
plam.o:plam.c
	gcc -c plam.c -Wall
plim.o:plim.c
	gcc -c plim.c -Wall
ploum.o:ploum.c plam.h plim.h
	gcc -c ploum.c -Wall
a.out:plam.o plim.o ploum.o
	gcc *o -o a.out
