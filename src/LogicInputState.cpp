#include "LogicInputState.h"

LogicInputState::LogicInputState()
{
	//ctor
}

LogicInputState::~LogicInputState()
{
	//dtor
}
		LogicInputState::LogicInputState(LogicInputState& c)
		{
			this->flags = c.flags;
		}
		LogicInputState& LogicInputState::operator=(const LogicInputState& c)
		{
			if (this == &c) return *this;
				this->flags = c.flags;

            return *this;
		}
