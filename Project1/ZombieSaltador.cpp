#include "ZombieSaltador.h"

ZombieSaltador::ZombieSaltador()
{
	setTipoZombie("Zombie Saltador");
	setVelocidad(60);
}

void ZombieSaltador::Saltar()
{
	posicionX = posicionX + DisSalto;
	velocidad = 30;
}
