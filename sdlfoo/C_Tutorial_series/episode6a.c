#include <SDL2/SDL.h>
#include <stdio.h>

int processEvents(SDL_Window *window)
{
    SDL_Event event;
    int done = 0;
    while(SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_WINDOWEVENT_CLOSE:
            {
                if(window)
                {
                    SDL_DestroyWindow(window);
                    window = NULL;
                    done = 1;
                }
            }
            break;
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        done = 1;
                    break;
                }
            }
            break;
            case SDL_QUIT:
                // Quit out of the game
                done = 1;
            break;
        }
    }
    return done;
}

void doRender(SDL_Renderer *renderer)
{
    // Set the drawing color to blue
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // Clear the screen (to blue)
    SDL_RenderClear(renderer);

    // Set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Fill the rectangle with white
    SDL_Rect rect = { 220, 140, 200, 200 };
    SDL_RenderFillRect(renderer, &rect);

    // Done drawing
    // "present" or show what we have drawn to the screen
    SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
    SDL_Window *window;         // Declare a window
    SDL_Renderer *renderer;     // Declare a renderer

    SDL_Init(SDL_INIT_VIDEO);

    // Create an application window
    window = SDL_CreateWindow("Game Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640,
                              480,
                              0
                              );
    renderer = SDL_CreateRenderer(window, -1,
                                  SDL_RENDERER_ACCELERATED);

    // The window is open: enter program loop (see SDL_PollEvent)
    int done = 0;
    
    // Event loop
    while(!done)
    {
        // Check for events
        done = processEvents(window);

        // Render display
        doRender(renderer);
    
        // Don't burn up the CPU
        SDL_Delay(100);
    }


    // Close & destroy the window
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    // Clean up
    SDL_Quit();
    return 0;
}