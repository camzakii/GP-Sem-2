#include "Player.h"
#include <iostream>

Player::Player()
	: m_iHealth(0)
{
	std::cout << "Player created!" << std::endl;
}
Player::~Player()
{
	std::cout << "Player destroyed!" << std::endl;
}

void
Player::SetHealth(int health)
{
	m_iHealth = health;
}

int
Player::GetHealth() const
{
	return (m_iHealth);
}