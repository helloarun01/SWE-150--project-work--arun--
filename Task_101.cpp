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

