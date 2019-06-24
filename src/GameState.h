#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <complex>
#include <vector>

#include "UtilityLib.h"


class GameState
{
	std::vector<Point2d> pos;

	public:
		GameState(int object_nr=0);
		virtual ~GameState();
		GameState(const GameState& other);
		GameState& operator=(const GameState& other);

	protected:

	private:
};

#endif // GAMESTATE_H
