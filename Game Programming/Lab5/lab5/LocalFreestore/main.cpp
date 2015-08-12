#include "Player.h"
#include <iostream>

int main()
{
	//Print wrong struct from freestore for some reason
	Player* pPlayer = 0;
	pPlayer = new Player();

	pPlayer->printStats();
	_sleep(5000);
	return(0);
}