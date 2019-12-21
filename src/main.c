
/**
*  main.c
*/
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Header.h"
#include "Graphics.h"
#include "Delta.h"
#include "Player_Input.h"

int FULLSCREEN_ON   = 0;
int FRAMES_RENDERED = 0;
int SECONDS_ELAPSED = 0;
int EXIT            = 0;

int main(int argc, char** argv)
{
    Window window;
    Renderer renderer;

    Thread input_thread;

    SDL_init();
    set_up_timer();

    window       = make_window("Chess");
    renderer     = make_renderer(&window);
    input_thread = SDL_CreateThread(input_handler, "input_handler", NULL);

    SDL_DetachThread(input_thread);

    while (!EXIT) {
        start_timer();

        delay();
        reset_timer();
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
