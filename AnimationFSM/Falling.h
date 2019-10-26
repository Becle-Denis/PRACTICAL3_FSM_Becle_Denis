#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling(int remaingJump = 2) : m_remainingJump(remaingJump) {};
	~Falling() {};

	void handleInput(PlayerFSM* a, sf::Event event) override;

	void update(PlayerFSM* a) override;

	void jumping(PlayerFSM* a) override;
	void landing(PlayerFSM* a) override;

private:
	int m_remainingJump;
};

#endif // !FALLING_H




