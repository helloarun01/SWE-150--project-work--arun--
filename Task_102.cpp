#include <SDL2/SDL.h>
#include <stdio.h>
#include <cmath>

// below I define window size and some constant
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define INITIAL_RADIUS 50

bool gameIsRunning = false;
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
Uint32 startTime;
Uint32 currentTime;
int radius = INITIAL_RADIUS;