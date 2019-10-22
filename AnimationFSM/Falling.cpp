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
	if (m_remainingJump > 0)
	{
		m_remainingJump--;
		State* previous = a->getPrevious();
		std::cout << "Falling -> Jumping" << std::endl;
		a->setPrevious(a->getCurrent());
		a->setCurrent(new Jumping(m_remainingJump));
		delete previous;
	}
}