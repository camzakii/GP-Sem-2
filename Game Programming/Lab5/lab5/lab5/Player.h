#ifndef __PLAYER__
#define __PLAYER__

class Player
{
public:
	Player();
	~Player();
	void setHealth(int h);
	int getHealth() const;

private:
	int m_iHealth;
};

#endif // __ENEMY_H__