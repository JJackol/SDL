#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H
#include <SDL.h>
#include <queue>
#include "src/InputControl.h"
#include "src/GameLogic.h"
#include "src/Display.h"
#include "src/GameTimer.h"

class MainProgram
{
	GameTimer timer;
	bool done = false;
	int w_width, w_height;
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    std::queue<SDL_Event> in_event_q;
    InputControl in_control;
    GameLogic logic;
    Display display;
    bool logic_update_flag, display_update_flag;

public:
    MainProgram(int w_width, int w_height,  Uint32 flags = 0 );
    virtual ~MainProgram();
    void main_loop();
    void handle_event(SDL_Event&);
};


#endif // MAINPROGRAM_H
