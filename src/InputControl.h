#ifndef INPUTCONTROL_H
#define INPUTCONTROL_H
#include <queue>
#include <SDL.h>
#include "src/LogicInputState.h"


class InputControl
{
	public:
		InputControl();
		virtual ~InputControl();

		LogicInputState update(std::queue<SDL_Event> &q);

	protected:

	private:
};

#endif // INPUTCONTROL_H
