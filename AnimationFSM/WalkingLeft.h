#ifndef WALKINGLEFT_H
#define WALKINGLEFT_H

#include <State.h>

class WalkingLeft :public State
{
public:

	WalkingLeft() {};
	~WalkingLeft() {};

	void up(PlayerFSM* a) override;
	void down(PlayerFSM* a) override;
	void right(PlayerFSM* a) override;
};


#endif // !WALKINGLEFT_H



