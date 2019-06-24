#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H
#include <SDL.h>
#include <queue>
#include "src/InputControl.h"
#include "src/GameLogic.h"
#include "src/Display.h"
class MainProgram
{
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    std::queue<SDL_Event> in_event_q;
    InputControl in_control;
    GameLogic logic;
    Display display;
public:
    MainProgram(int w_width, int w_height,  Uint32 flags = 0 );
    virtual ~MainProgram();
    void main_loop();
    void handle_event(SDL_Event&);
};


//////
//class MainProgram
//{
//	public:
//		MainProgram();
//		virtual ~MainProgram();
//
//	protected:
//
//	private:
//};

#endif // MAINPROGRAM_H
