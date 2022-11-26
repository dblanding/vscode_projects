/*
needed to install SDL libraries
sudo apt-get install libsdl2-dev
sudo apt-get install libsdl2-image-dev
g++ BouncyBall.cpp ball.cpp -w -lSDL2 -lSDL2_image -o bb_10
 */

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "BouncyBall.h"

static const int nBalls = 10;
static SDL_Texture *ball = nullptr;
BouncyBall balls[nBalls];

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
                // quit out of the game
                done = 1;
            break;
        }
    }
    return done;
}

void doRender(SDL_Renderer *renderer)
{ 
    // set the drawing color to blue
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255 );

    // Clear the screen (to blue)
    SDL_RenderClear(renderer);

     // set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0 );

    //SDL_Rect rect = {0, 0, 50, 50 };
    //SDL_RenderCopy(renderer, ball, nullptr, &rect);

    for(int i = 0; i < nBalls; i++)
    {
        balls[i].draw(renderer);
    }
    // We are done drawing, "present" or show to the screen what we've drawn
    SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
    SDL_Window *window;         // Declare a window
    SDL_Renderer *renderer;     // Declare a renderer

    SDL_Init(SDL_INIT_VIDEO);   // Initialize SDL2

    // Create an application window with the following settings:
    window = SDL_CreateWindow("Ten Bouncing Balls",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640,
                              480,
                              SDL_WINDOW_SHOWN
                              );
    
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    auto surface = IMG_Load("ball.png");
    if (surface)
    {
        ball= SDL_CreateTextureFromSurface(renderer, surface);
    }
    else
    {
        return 1;
    }
    SDL_FreeSurface(surface);
    
    for (int i = 0; i < nBalls; i++)
    {
        balls[i].setTexture(ball);
        balls[i].setPos(50 + i*50, 100);
    }
    // The window is open: enter prgram loop (see SDL_PollEvent)
    int done = 0;

    // Event loop
    while(!done)
    {
        // check for events
        done = processEvents(window);

        for(int i = 0; i < nBalls; i++)
        {
            balls[i].update();
        }

        // render display
        doRender(renderer);

        // Don't burn up the CPU
        SDL_Delay(10);
    }

    // Close and destroy the window
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    // Clean up
    SDL_Quit();
    return 0;
}