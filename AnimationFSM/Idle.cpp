#include <Idle.h>
#include <Jumping.h>
#include <WalkingLeft.h>
#include <WalkingRight.h>
#include <Falling.h>

#include <string>

void Idle::left(PlayerFSM* a)
{
	std::cout << "Idle -> Walking Left" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new WalkingLeft());
	delete previous;
}

void Idle::right(PlayerFSM* a)
{
	std::cout << "Idle -> Walking Right" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new WalkingRight());
	delete previous;
}

void Idle::up(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Jumping());
	delete previous;
}

void Idle::down(PlayerFSM* a)
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