#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling(int remaingJump = 2) : m_remainingJump(remaingJump) {};
	~Falling() {};

	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;

private:
	int m_remainingJump;
};

#endif // !FALLING_H




