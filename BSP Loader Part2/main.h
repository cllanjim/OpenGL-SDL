#ifndef _MAIN_H
#define _MAIN_H


#include <GL/gl.h>                      // Header File For The OpenGL32 Library
#include <GL/glu.h>                     // Header File For The GLu32 Library
#include <iostream>                     // Include our c++ standard header
#include <fstream>                      // Include this to use ifstream
#include <string>                       // Include this to use the string class
#include <vector>                       // Include this to use STL vectors

#include "image.h"
#include "SDL.h"

using namespace std;                    // Start off with the standard namespace

#define SCREEN_WIDTH  640               // We want our screen width 640 pixels
#define SCREEN_HEIGHT 480               // We want our screen height 480 pixels
#define SCREEN_DEPTH 16                 // We want 16 bits per pixel

#define MAX_TEXTURES 1000               // The maximum amount of textures to load

typedef unsigned int UINT;
extern UINT g_Texture[MAX_TEXTURES];    // Our global texture array


// This is our basic 3D point/vector class
struct CVector3
{
public:
    
    // A default constructor
    CVector3() {}

    // This is our constructor that allows us to initialize our data upon creating an instance
    CVector3(float X, float Y, float Z) 
    { 
        x = X; y = Y; z = Z;
    }

    // Here we overload the + operator so we can add vectors together 
    CVector3 operator+(CVector3 vVector)
    {
        // Return the added vectors result.
        return CVector3(vVector.x + x, vVector.y + y, vVector.z + z);
    }

    // Here we overload the - operator so we can subtract vectors 
    CVector3 operator-(CVector3 vVector)
    {
        // Return the subtracted vectors result
        return CVector3(x - vVector.x, y - vVector.y, z - vVector.z);
    }
    
    // Here we overload the * operator so we can multiply by scalars
    CVector3 operator*(float num)
    {
        // Return the scaled vector
        return CVector3(x * num, y * num, z * num);
    }

    // Here we overload the / operator so we can divide by a scalar
    CVector3 operator/(float num)
    {
        // Return the scale vector
        return CVector3(x / num, y / num, z / num);
    }

    float x, y, z;                      
};


/////// * /////////// * /////////// * NEW * /////// * /////////// * /////////// *

// This is our basic 2D point class.  This will be used to store the UV coordinates.
class CVector2 
{
public:

        // A default constructor
    CVector2() {}

    // This is our constructor that allows us to initialize our data upon creating an instance
    CVector2(float X, float Y) 
    { 
        x = X; y = Y;
    }

    // Here we overload the + operator so we can add vectors together 
    CVector2 operator+(CVector2 vVector)
    {
        // Return the added vectors result.
        return CVector2(vVector.x + x, vVector.y + y);
    }

    // Here we overload the - operator so we can subtract vectors 
    CVector2 operator-(CVector2 vVector)
    {
        // Return the subtracted vectors result
        return CVector2(x - vVector.x, y - vVector.y);
    }
    
    // Here we overload the * operator so we can multiply by scalars
    CVector2 operator*(float num)
    {
        // Return the scaled vector
        return CVector2(x * num, y * num);
    }

    // Here we overload the / operator so we can divide by a scalar
    CVector2 operator/(float num)
    {
        // Return the scale vector
        return CVector2(x / num, y / num);
    }

    float x, y;
};

/////// * /////////// * /////////// * NEW * /////// * /////////// * /////////// *


// Extern our global variables so other source files can use them

extern float g_FrameInterval;
extern int VideoFlags;                                     // defines how the drawing surface should be
extern SDL_Surface *MainWindow;                            // our main window for drawing

// This controls our main program loop
void MainLoop();

// This creates a texture and stores it in the texture array with it's ID.
bool CreateTexture(UINT &texture, char *strFileName);

// This changes the screen to full screen mode
void ToggleFullScreen();

// This is our own function that makes creating a window modular and easy
void CreateMyWindow(char *strWindowName, int width, int height, int Videoflags);

// This allows us to configure our window for OpenGL and backbuffered
void SetupPixelFormat(void);

// This inits our screen translations and projections
void SizeOpenGLScreen(int width, int height);

// This sets up OpenGL
void InitializeOpenGL(int width, int height);

// This initializes the whole program
void Init();

// This draws everything to the screen
void RenderScene();

// This Shuts down SDL and quits the program
void Quit(int ret_val);
#endif 


/////////////////////////////////////////////////////////////////////////////////
//
// * QUICK NOTES * 
//
// nothing has changed since last tutorial
// 
// 
// Ben Humphrey (DigiBen)
// Game Programmer
// DigiBen@GameTutorials.com
// Co-Web Host of www.GameTutorials.com
//
//
