#include "WalkingRight.h"

#include "Idle.h"
#include "Jumping.h"
#include "Falling.h"

void WalkingRight::left(PlayerFSM* a)
{
	std::cout << "Walking Right -> Idle" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Idle());
	delete previous;
}

void WalkingRight::up(PlayerFSM* a)
{
	std::cout << "Walking Right -> Jumping" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Jumping());
	delete previous;
}

void WalkingRight::down(PlayerFSM* a)
{
	std::cout << "Walking Right -> Falling" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Falling());
	delete previous;
}