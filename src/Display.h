#ifndef DISPLAY_H
#define DISPLAY_H
#include "src/GameState.h"
#include "src/GameLogic.h"
#include <SDL.h>
class Display
{

	SDL_Window * m_window;
    SDL_Renderer * m_renderer;

    unsigned char r=0, g=0, b=0, a=0;
	public:
		Display();
		virtual ~Display();
		void update(GameState state);
		void update(GameLogic logic_state);
		void set_window(SDL_Window * );
		void set_renderer(SDL_Renderer * );
	protected:

	private:
};

#endif // DISPLAY_H
