#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    SDL_Init(SDL_INIT_VIDEO);

    // Create an application window
    window = SDL_CreateWindow("Game Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640,
                              480,
                              0
                              );
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Set the drawing color to blue
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // Clear the screen (to blue)
    SDL_RenderClear(renderer);

    // Set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Create a rectangle and fill it with white
    SDL_Rect rect = { 320-50, 240-50, 100, 100 };
    SDL_RenderFillRect(renderer, &rect);

    // Done drawing, "present" or show what we have drawn to the screen
    SDL_RenderPresent(renderer);

    // wait before quitting
    SDL_Delay(2000);

    // Close & destroy the window
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    // Clean up
    SDL_Quit();
    return 0;
}