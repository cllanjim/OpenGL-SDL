CC			= g++ 

TARGET		= octree

$(TARGET):	Main.o Init.o Camera.o Octree.o 
	$(CC) -o $(TARGET) Main.o Init.o Camera.o Octree.o `sdl-config --libs` -lGL -lGLU -lm -ljpeg

Main.o:		Main.cpp main.h Camera.h
	$(CC) -c `sdl-con g --cflags` Main.cpp

Init.o:		Init.cpp main.h
	$(CC) -c `sdl-config --cflags` Init.cpp

Camera.o :  Camera.cpp main.h Camera.h
	$(CC) -c `sdl-config --cflags` Camera.cpp

Octree.o :  Octree.cpp Octree.h main.h
	$(CC) -c `sdl-config --cflags` Octree.cpp

clean:
	rm -f $(TARGET) Main.o Init.o Camera.o Octree.o core
