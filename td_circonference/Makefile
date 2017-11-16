run:exe
	./exe	
principal.o:surface.h circonference.h principal.c
	gcc -c principal.c
surface.o:surface.c pi.h
	gcc -c surface.c
circonference.o:circonference.c pi.h
	gcc -c circonference.c
exe:principal.o surface.o circonference.o
	gcc *.o -o exe 


