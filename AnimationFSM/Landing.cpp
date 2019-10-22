#include "Landing.h"
#include "Idle.h"


void Landing::idle(PlayerFSM* a)
{
	std::cout << "Landing -> Idle" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Idle());
	delete previous;
}