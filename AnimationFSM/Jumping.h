#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping(int remainingJump = 1) : m_remainingJump(remainingJump) {};
	~Jumping() {};


	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;

	
private:
	int m_remainingJump;

};

#endif // !IDLE_H