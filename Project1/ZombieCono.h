#pragma once

#include <iostream>
#include "Zombie.h"

using namespace std;

class ZombieCono : public Zombie
{
private:
	bool armadura_metal = false;
public:
	ZombieCono();
	ZombieCono(string _nombre) : Zombie(_nombre) {
		setTipoZombie("Zombie Cono");
		setArmadura(200);
	};
};
