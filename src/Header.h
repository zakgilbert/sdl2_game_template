#ifndef HEADER_H
#define HEADER_H

#define FPS 60
#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500

typedef SDL_Renderer* Renderer;
typedef SDL_Window* Window;
typedef SDL_Thread* Thread;

extern int FULLSCREEN_ON;
extern int FRAMES_RENDERED;
extern int SECONDS_ELAPSED;
extern int EXIT;

#endif /* HEADER_H */
