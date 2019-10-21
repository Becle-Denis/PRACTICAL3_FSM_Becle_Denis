#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};

	void idle(PlayerFSM* a) override;
	void jumping(PlayerFSM* a) override;
	void falling(PlayerFSM* a) override;

};


#endif // !WALKING_H



