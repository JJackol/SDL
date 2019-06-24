#include "Display.h"

Display::Display()
{
	//ctor
}

Display::~Display()
{
	//dtor
}

	void Display::update(GameState state)
	{


	}
	void Display::update(GameLogic logic)
	{
		SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
		r+=1;
		g+=2;
		SDL_RenderClear(m_renderer);
		SDL_RenderPresent(m_renderer);
	}
	void Display::set_window(SDL_Window * window)
	{
		m_window = window;
	}
	void Display::set_renderer(SDL_Renderer * render)
	{
		m_renderer = render;
	}
