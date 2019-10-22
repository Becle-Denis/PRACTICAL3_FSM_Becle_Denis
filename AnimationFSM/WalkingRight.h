#ifndef WALKINGRIGHT_H
#define WALKINGRIGHT_H

#include <State.h>

class WalkingRight : public State
{
public:
	WalkingRight() {};
	~WalkingRight() {};

	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;
	void left(PlayerFSM* a) override;

};

#endif // !WALKINGRIGHT_H



