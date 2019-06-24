#ifndef MAP_H
#define MAP_H
#include <SDL.h>

class Map
{
	int w,h;
	SDL_Color color;
	public:
		Map(int w=1000, int h=1000, SDL_Color color={200,150,0,255});
		virtual ~Map();

	protected:

	private:
};

#endif // MAP_H
