#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void up(PlayerFSM* a) {};

	virtual void down(PlayerFSM* a) {};

	virtual void left(PlayerFSM* a) {};

	virtual void right(PlayerFSM* a) {};

	virtual void idling(PlayerFSM* a) {};
};

#endif // ! ANIMATION_H

