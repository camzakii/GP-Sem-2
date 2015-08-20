#ifndef __PLAYERSHIP__
#define __PLAYERSHIP__

#include "Entity.h"

// Forward Declarations:
class BackBuffer;
class Sprite;


class PlayerShip : public Entity
{
public:
	PlayerShip();
	~PlayerShip();

private:
	int pos_x;
	int pos_y;
};

#endif // __PLAYERSHIP__