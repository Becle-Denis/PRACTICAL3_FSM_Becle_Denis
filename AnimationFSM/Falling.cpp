#include "Falling.h"
#include "Landing.h"
#include "Jumping.h"

void Falling::down(PlayerFSM* a)
{
	std::cout << "Falling -> Landing" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Landing());
	delete previous;
}

void Falling::up(PlayerFSM* a)
{

		std::cout << "Falling -> Jumping" << std::endl;
		State* previous = a->getPrevious();
		a->setPrevious(a->getCurrent());
		a->setCurrent(new Jumping());
		delete previous;

}