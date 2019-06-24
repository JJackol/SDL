#include "GameTimer.h"
#include <SDL_timer.h>
#include <SDL_events.h>
#include "src/UtilityLib.h"
GameTimer::GameTimer()
{
	//ctor
}

GameTimer::~GameTimer()
{
	//dtor
}

Uint32 tick_callback( Uint32 interval, void* param )
	{
		SDL_Event event;
		SDL_UserEvent userevent;

		/* In this example, our callback pushes a function
		into the queue, and causes our callback to be called again at the
		same interval: */

		userevent.type = SDL_USEREVENT;
		userevent.code = TICKS;
		userevent.data1 = 0;
		userevent.data2 = param;

		event.type = SDL_USEREVENT;
		event.user = userevent;

		SDL_PushEvent(&event);
		return(interval);

	}

Uint32 fps_callback( Uint32 interval, void* param )
	{
		SDL_Event event;
		SDL_UserEvent userevent;

		/* In this example, our callback pushes a function
		into the queue, and causes our callback to be called again at the
		same interval: */

		userevent.type = SDL_USEREVENT;
		userevent.code = FPS;
		userevent.data1 = 0;
		userevent.data2 = param;

		event.type = SDL_USEREVENT;
		event.user = userevent;

		SDL_PushEvent(&event);
		return(interval);

	}

	bool GameTimer::init_timer()
	{
		tick_timer_id = SDL_AddTimer(tick_delay, tick_callback, nullptr);
		fps_timer_id = SDL_AddTimer(fps_delay, fps_callback, nullptr);

		return false;
	}
