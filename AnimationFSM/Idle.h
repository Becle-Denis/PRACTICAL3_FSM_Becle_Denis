#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:

	Idle() {};
	~Idle() {};

	void walking(PlayerFSM* a) override;
	void jumping(PlayerFSM* a) override;
	void falling(PlayerFSM* a) override;

};

#endif // !IDLE_H