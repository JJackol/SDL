#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "src/LogicInputState.h"

class GameLogic
{
	public:
		GameLogic();
		virtual ~GameLogic();
		void update(LogicInputState &in_state){};

	protected:

	private:
};

#endif // GAMELOGIC_H
