#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:

	Idle() {};
	~Idle() {};

	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;
	void left(PlayerFSM* a) override;
	void right(PlayerFSM* a) override;

};

#endif // !IDLE_H