#include <PlayerFSM.h>
#include <Idle.h>

PlayerFSM::PlayerFSM()
{
	m_current = new Idle();
}

PlayerFSM::~PlayerFSM() {}

void PlayerFSM::setCurrent(State* s)
{
	m_current = s;
}

State* PlayerFSM::getCurrent()
{
	return m_current;
}

void PlayerFSM::setPrevious(State* s)
{
	m_previous = s;
}

State* PlayerFSM::getPrevious()
{
	return m_previous;
}

void PlayerFSM::goingUp()
{
	m_current->up(this);
}

void PlayerFSM::goingDown()
{
	m_current->down(this);
}

void PlayerFSM::goingLeft()
{
	m_current->left(this);
}

void PlayerFSM::goingRight()
{
	m_current->right(this);
}

void PlayerFSM::idling()
{
	m_current->idling(this);
}

