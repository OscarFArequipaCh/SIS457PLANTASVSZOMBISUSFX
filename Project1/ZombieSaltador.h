#pragma once

#include <iostream>
#include "Zombie.h"

class ZombieSaltador : public Zombie
{
private:

	float DisSalto = 3.5;

public:

	ZombieSaltador();

	void Saltar();
};

