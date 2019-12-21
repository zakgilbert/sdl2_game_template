
/**
*  Player_Input.c
*/

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Header.h"
#include "Player_Input.h"
int input_handler(void* data)
{
    union SDL_Event event;

    while (SDL_WaitEvent(&event) && !EXIT) {
        switch (event.type) {
        case SDL_QUIT:
            EXIT = 1;
            break;

        case SDL_KEYDOWN:
            /**
                switch (event.key.keysym.scancode) {
                }
*/
            break;
        default:
            break;
        }
    }
    return 0;
}
