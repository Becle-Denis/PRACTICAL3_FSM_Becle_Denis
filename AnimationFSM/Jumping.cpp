#include <Jumping.h>
#include <Idle.h>
#include <Falling.h>

#include <string>




void Jumping::up(PlayerFSM* a)
{
	if (m_remainingJump > 0)
	{
		m_remainingJump--;
		std::cout << "Jumping -> Jumping" << std::endl;
		State* previous = a->getPrevious();
		a->setPrevious(a->getCurrent());
		a->setCurrent(new Jumping(m_remainingJump));
		delete previous;
	}
}

void Jumping::down(PlayerFSM* a)
{
	std::cout << "Jumping -> Falling" << std::endl;
	State* previous = a->getPrevious();
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Falling(m_remainingJump));
	delete previous;
}


/*
void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

*/