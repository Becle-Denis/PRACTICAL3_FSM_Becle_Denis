#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Falling.h>

#include <string>

void Idle::walking(PlayerFSM* a)
{
	std::cout << "Idle -> Walking" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Walking());
	delete previous;
}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Jumping());
	delete previous;
}

void Idle::falling(PlayerFSM* a)
{
	std::cout << "Idle -> Falling" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Falling());
	delete previous;
}





/*
void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

*/