#include "Zombie.h"

Zombie::Zombie()
{
	//energia = 100;
	nivelFuria = 20;
	velocidad = 30;
	posicionX = 900.0f;
	posicionY = 450.0f;
	tipoZombie = "Zombie normal";
	nombre = "Zombie anonimo";
}

Zombie::Zombie(string _nombre)
{
	//energia = 100;
	nivelFuria = 20;
	velocidad = 30;
	posicionX = 900.0f;
	posicionY = 350.0f;
	tipoZombie = "Zombie normal";
	nombre = _nombre;
}

Zombie::Zombie(string _nombre, int _armadura, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie)
{
	armadura = _armadura;
	nivelFuria = _nivelFuria;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	tipoZombie = _tipoZombie;
	nombre = _nombre;
}

void Zombie::moverse()
{
	posicionX -= velocidad;
}

void Zombie::moverse(float _posicionSiguienteX, float _posicionSiguienteY)
{
}

void Zombie::moverse(float _posicionFinalX, float _posicionFinalY, int _velocidad)
{
}

void Zombie::atacar()
{
}

void Zombie::morir() {

}

void Zombie::morder()
{
}
