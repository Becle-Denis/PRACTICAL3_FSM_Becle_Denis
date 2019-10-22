#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling() {};
	~Falling() {};

	void landing(PlayerFSM* a) override;
	void jumping(PlayerFSM* a) override;
};

#endif // !FALLING_H




