#ifndef UTILITYLIB_H
#define UTILITYLIB_H
#include "UtilityLib.h"
#include <complex>

typedef std::complex<float> Point2d;

	enum event_code
	{
		TICKS = 1,
		FPS
	};

class UtilityLib
{
	public:
		UtilityLib();
		virtual ~UtilityLib();

	protected:

	private:
};


#endif // UTILITYLIB_H
