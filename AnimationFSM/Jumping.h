#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping(int remainingJump = 1) : m_remainingJump(remainingJump) {};
	~Jumping() {};

	void handleInput(PlayerFSM* a, sf::Event event) override;
	void update(PlayerFSM* a) override;

	void jumping(PlayerFSM* a) override;
	void falling(PlayerFSM* a) override;

	
private:
	int m_remainingJump;

};

#endif // !IDLE_H