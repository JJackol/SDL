#ifndef PLAYER_H
#define PLAYER_H

#include <Game_Object.h>
#include <LogicInputState.h>


class Player : public Game_Object
{
	public:
		Player();
		virtual ~Player();
		void update(double delta, LogicInputState input){};

	protected:

	private:
};

#endif // PLAYER_H
