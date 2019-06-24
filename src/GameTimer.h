#ifndef GAMETIMER_H
#define GAMETIMER_H

#include <SDL_timer.h>

class GameTimer
{
	enum event_code
	{
		TICKS = 1,
		FPS = 2
	};
	int ticks = 30;
	int fps = 30;
	int tick_delay = 1000/ticks;
	int fps_delay = 1000/fps;
	SDL_TimerID tick_timer_id;
	SDL_TimerID fps_timer_id;
	public:
		GameTimer();
		virtual ~GameTimer();
		bool init_timer();

		friend Uint32 callback( Uint32 interval, void* param );
	protected:

	private:
};

#endif // GAMETIMER_H
