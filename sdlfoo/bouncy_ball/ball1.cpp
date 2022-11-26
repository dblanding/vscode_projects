/* This is a modified version of ball.cpp,
based on ball.cpp referred to in video at:
https://www.youtube.com/watch?v=SCjTi6S2_0o

The video above shows 10 bouncing balls
But this shows just one bouncing ball.

To compile:
g++ ball1.cpp BouncyBall.cpp -w -lSDL2 -lSDL2_image -o bouncyball

*/

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "BouncyBall.h"

static SDL_Texture *ball = nullptr;
BouncyBall bb;

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
                // Quit out of game
                done = 1;
            break;
        }
    }
    return done;
}

void doRender(SDL_Renderer *renderer)
{
    // set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255 );

    // Clear the screen (to DrawColor)
    SDL_RenderClear(renderer);

    // set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255 );

    // make a small square on the screen {x,y,w,h}
    // SDL_Rect rect = {320, 240, 32, 32 };

    // copy the ball texture to the rect patch
    // SDL_RenderCopy(renderer, ball, nullptr, &rect);

    bb.draw(renderer);

    // We are done drawing, "present" or show to the screen what we've drawn
    SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
    SDL_Window *window;         // Declare a window
    SDL_Renderer *renderer;     // Declare a renderer

    SDL_Init(SDL_INIT_VIDEO);   // Initialize SDL2

    // Create an application window with the following settings:
    window = SDL_CreateWindow("Game Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640, 480, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Think of the 'surface' as the pixels of the image
    auto surface = IMG_Load("ball.png");

    // Create 'texture' from surface
    // Think of the 'texture' as the hardware accelerated object that gets rendered
    if (surface)
    {
        auto ball_texture = SDL_CreateTextureFromSurface(renderer, surface);
        bb.setTexture(ball_texture);
        bb.setPos(50, 100);
        SDL_FreeSurface(surface);
    }
    else
    {
        return 1;
    }

    // The window is open: enter program loop (see SDL_PollEvent)
    int done = 0;

    // Event loop
    while(!done)
    {
        // Check for events
        done = processEvents(window);

        bb.update();
 
        // Render display
        doRender(renderer);

        // Don't burn up the CPU
        SDL_Delay(10);

    }

    // Close and destroy the window
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    return 0;
}