#include "ZombieSaltador.h"

ZombieSaltador::ZombieSaltador()
{
	setTipoZombie("Zombie Saltador");
}

void ZombieSaltador::moverse() {
	posicionX = posicionX - (velocidad*2);
}

void ZombieSaltador::Saltar()
{
	posicionX = posicionX + DisSalto;
	velocidad = 30;
}
