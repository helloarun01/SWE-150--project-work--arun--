#include<SDL2/SDL.h>
#include<stdio.h>
#include<cmath>

// here I define the window size
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

//here I define the constant and global pointer
bool gameIsRunning =false;
SDL_Window *window=NULL;
SDL_Renderer *renderer=NULL;
const int circle_radius=100;

// write function for window and renderer initializetion
bool initializeWindow(void)
{
    if (SDL_Init(SDL_INIT_VIDEO)<0)
    {
        printf("error: sdl failed to initialize\nsdl error is: '%s'\n",SDL_GetError());
        return false;
    }

    window=SDL_CreateWindow(
        "Task_101 :project work- 1st Task",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        0
    );

    if(!window)
    {
        printf("error failed to open windoe\nsdl error is :'%s'",SDL_GetError());
        return false;
    }

    renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    if(!renderer)
    {
        printf("error to create renderer\nsdl error is :'%s'\n",SDL_GetError());
        return false;
    }

    return true;
}