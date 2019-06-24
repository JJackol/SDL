#ifndef LOGICINPUTSTATE_H
#define LOGICINPUTSTATE_H
#include "UtilityLib.h"

class LogicInputState
{
	int flags;

	public:
		LogicInputState();
		LogicInputState(LogicInputState& );
		LogicInputState& operator=(const LogicInputState& );
		virtual ~LogicInputState();

	protected:

	private:
};

#endif // LOGICINPUTSTATE_H
