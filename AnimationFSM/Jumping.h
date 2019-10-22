#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping(bool canRejump = true) : m_canRejump(canRejump) {};
	~Jumping() {};

	void jumping(PlayerFSM* a) override;
	void falling(PlayerFSM* a) override;

	bool getRejump();
	
private:
	bool m_canRejump;

};

#endif // !IDLE_H