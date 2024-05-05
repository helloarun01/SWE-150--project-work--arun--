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


// same like first task101 write initialization function
bool initializeWindow(void)
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Error: SDL failed to initialize\nSDL Error: '%s'\n", SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow(
        "SDL Circle",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        0);

    if (!window)
    {
        printf("Error: Failed to open window\nSDL Error: '%s'\n", SDL_GetError());
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer)
    {
        printf("Error: Failed to create renderer\nSDL Error: '%s'\n", SDL_GetError());
        return false;
    }
    return true;
}


