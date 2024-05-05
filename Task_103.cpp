#include <SDL2/SDL.h>
#include <stdio.h>
#include <cmath>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define CIRCLE_RADIUS 50 
#define CIRCLE_SPEED 3 // circle speed for which circle that move

bool gameIsRunning = false;
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
Uint32 startTime;           //unit32 is data type of sdl
Uint32 currentTime;
int circle1X = 0; // x-coordinate of the first circle
int circle1Y = SCREEN_HEIGHT / 2; // y-coordinate of the first circle
int circle2X = SCREEN_WIDTH / 2; // x-coordinate of the second circle
int circle2Y = 0; // y-coordinate of the second circle
bool upKeyPressed = false;
bool downKeyPressed = false;
bool leftKeyPressed = false;       
bool rightKeyPressed = false;

