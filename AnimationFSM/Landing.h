#ifndef LANDING_H
#define LANDING_H

#include <State.h>

class Landing : public State
{
public:
	Landing() {};
	~Landing() {};

	void up(PlayerFSM* a) override;


};



#endif // !LANDING_H




