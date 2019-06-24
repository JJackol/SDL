#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include "UtilityLib.h"

class Game_Object
{

	public:
		Game_Object();
		virtual ~Game_Object();
		virtual void update(double delta){};

	protected:
		//to do

	private:
};

#endif // GAME_OBJECT_H
