#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling() {};
	~Falling() {};

	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;

};

#endif // !FALLING_H




