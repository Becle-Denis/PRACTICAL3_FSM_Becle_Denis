#include "WalkingLeft.h"
#include "Idle.h"
#include "Jumping.h"
#include "Falling.h"

void WalkingLeft::right(PlayerFSM* a)
{
	std::cout << "Walking Left -> Idle" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Idle());
	delete previous;
}

void WalkingLeft::up(PlayerFSM* a)
{
	std::cout << "Walking Left -> Jumping" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Jumping());
	delete previous;
}

void WalkingLeft::down(PlayerFSM* a)
{
	std::cout << "Walking Left -> Falling" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Falling());
	delete previous;
}