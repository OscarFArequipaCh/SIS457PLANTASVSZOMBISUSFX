#pragma once

#include <iostream>
#include "Zombie.h"

class ZombieSaltador : public Zombie
{
private:

	float DisSalto = 100;

public:

	ZombieSaltador();

	void moverse();
	void Saltar();
};

