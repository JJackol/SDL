#include "GameLogic.h"

GameLogic::GameLogic()
{
	//ctor
}

GameLogic::~GameLogic()
{
	//dtor
}


	void GameLogic::update(LogicInputState &in_state, GameState& s)
	{
		t2 = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> time = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
		delta = time.count();

		player.update(delta, in_state);

        for(auto obj: obj_list)
			obj->update(delta);

		t1=t2;
	}
