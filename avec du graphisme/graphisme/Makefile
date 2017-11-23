run: a.out
	./a.out

graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c graphics.c
	
	
liste.o:liste.c liste.h
	cc -Wall `sdl-config --cflags`  -c liste.c
simul.o:simul.c simul.h
	gcc -Wall `sdl-config --cflags`  -c simul.c
	
main.o:main.c graphics.h liste.o simul.o
	gcc -Wall `sdl-config --cflags`  -c main.c
	
a.out: main.o
	gcc *.o -Wall -o a.out `sdl-config --libs` -lSDL_ttf -lm 
	

