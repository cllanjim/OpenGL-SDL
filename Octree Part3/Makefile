CC			= g++ 

TARGET		= octree3

$(TARGET):	Main.o Init.o Camera.o Octree.o Frustum.o 3ds.o
	$(CC) -o $(TARGET) Main.o Init.o Camera.o Octree.o Frustum.o 3ds.o `sdl-config --libs` -lGL -lGLU -lm

Main.o:		Main.cpp main.h Ca; ra.h
	$(CC) -c `sdl-config --cflags` Main.cpp

Init.o:		Init.cpp main.h
	$(CC) -c `sdl-config --cflags` Init.cpp

Camera.o :  Camera.cpp main.h Camera.h
	$(CC) -c `sdl-config --cflags` Camera.cpp

Octree.o :  Octree.cpp Octree.h main.h
	$(CC) -c `sdl-config --cflags` Octree.cpp

Frustum.o :  Frustum.cpp Frustum.h 
	$(CC) -c `sdl-config --cflags` Frustum.cpp

3ds.o :  3ds.cpp 3ds.h 
	$(CC) -c `sdl-config --cflags` 3ds.cpp

clean:
	rm -f $(TARGET) Main.o Init.o Camera.o Octree.o Frustum.o 3ds.o core
