#include "ZombieLector.h"
#include "Zombie.h"

ZombieLector::ZombieLector()
{
	setTipoZombie("Zombie Lector");
	setArmadura(80);
}

void ZombieLector::Enfurecer()
{
	if (getArmadura() == 0) {
		velocidad = velocidad + 30;
	}
}
