CC			= g++

TARGET		= Particle 

$(TARGET):	OGL.o particle.o main.o
	$(CC) -o $(TARGET) OGL.o particle.o main.o `sdl-config --libs` -lGL -lGLU -lm

OGL.o:		OGL.cpp OGL.h
	$(CC) -c OGL.cpp `sdl-config --cflags`

particle.o: article.cpp particle.h
	$(CC) -c particle.cpp `sdl-config --cflags`

main.o:	main.cpp
	$(CC) -c main.cpp `sdl-config --cflags`

clean:
	rm -f $(TARGET) OGL.o particle.o main.o 
