#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "src/LogicInputState.h"
#include "src/GameState.h"
#include "src/Game_Object.h"
#include "src/Player.h"
#include <list>
#include <chrono>
#include "UtilityLib.h"
#include "src/Map.h"

class GameLogic
{
	Map mapa;
	Game_Object** objects;
	std::list<Game_Object*> obj_list;
	int nr_of_objects;
	Player player;

	double delta;
	std::chrono::high_resolution_clock::time_point t1;
	std::chrono::high_resolution_clock::time_point t2;

	public:
		GameLogic();
		virtual ~GameLogic();
		void update(LogicInputState &in_state, GameState& s);
		double get_delta(){return delta;}

	protected:

	private:
};

#endif // GAMELOGIC_H
