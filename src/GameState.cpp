#include "GameState.h"

GameState::GameState(int object_nr)
{
	//ctor
}

GameState::~GameState()
{
	//dtor
}

GameState::GameState(const GameState& other)
{
	//copy ctor
}

GameState& GameState::operator=(const GameState& rhs)
{
	if (this == &rhs) return *this; // handle self assignment
	//assignment operator
	return *this;
}
