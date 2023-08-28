#include <iostream>
#include "Zombie.h"
#include "ZombieCono.h"
#include "Jardin.h"
#include "planta.h"

using namespace std;

int main() {

	Jardin* lvl1 = new Jardin();

	Zombie* z1 = new Zombie("Juan");

	planta* p1 = new planta(1,4);

	cout << "El nombre del zombie es: " << z1->getNombre() << endl;
	cout << "La energia del zombie es: " << z1->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << z1->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << z1->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << z1->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << z1->getTipoZombie() << endl;

	cout << "La energia de la planta es: " << p1->getEnergia() << endl;
	cout << "La planta se encuetra en la fila: " << p1->getposicionX() << endl;
	cout << "La planta se encuetra en la columna: " << p1->getposicionY() << endl;
	cout << "El tipo de planta es: " << p1->getTipoPlanta() << endl;

	// Se envia su posicion para que la clase jardin busque su ubicacion
	lvl1->localizarPlanta(p1->getposicionX(), p1->getposicionY());
	lvl1->localizarZombie(z1->getPosicionX(), z1->getPosicionY());
	
	// Se genera una simulacion del jardin
	lvl1->generar();

	system("pause");
	system("cls");

	z1->moverse();
	z1->moverse();
	z1->moverse();

	cout << "El nombre del zombie es: " << z1->getNombre() << endl;
	cout << "La energia del zombie es: " << z1->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << z1->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << z1->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << z1->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << z1->getTipoZombie() << endl;

	cout << "La energia de la planta es: " << p1->getEnergia() << endl;
	cout << "La planta se encuetra en la fila: " << p1->getposicionX() << endl;
	cout << "La planta se encuetra en la columna: " << p1->getposicionY() << endl;
	cout << "El tipo de planta es: " << p1->getTipoPlanta() << endl;

	// Se actualiza el estado del jardin

	lvl1->localizarPlanta(p1->getposicionX(), p1->getposicionY());
	lvl1->localizarZombie(z1->getPosicionX(), z1->getPosicionY());

	lvl1->generar();

	z1->setPosicionX(300);

	system("pause");
	system("cls");

	z1->moverse();
	z1->moverse();
	z1->moverse();
	z1->moverse();
	z1->moverse();
	z1->moverse();

	cout << "El nombre del zombie es: " << z1->getNombre() << endl;
	cout << "La energia del zombie es: " << z1->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << z1->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << z1->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << z1->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << z1->getTipoZombie() << endl;

	cout << "La energia de la planta es: " << p1->getEnergia() << endl;
	cout << "La planta se encuetra en la fila: " << p1->getposicionX() << endl;
	cout << "La planta se encuetra en la columna: " << p1->getposicionY() << endl;
	cout << "El tipo de planta es: " << p1->getTipoPlanta() << endl;

	// Se actualiza el estado del jardin

	lvl1->localizarPlanta(p1->getposicionX(), p1->getposicionY());
	lvl1->localizarZombie(z1->getPosicionX(), z1->getPosicionY());

	lvl1->generar();

	// Se matara a la planta cambiando su energia y llamando a su funcion

	//p1->setEnergia(0);
	//p1->morir();

	// Se actualiza el estado del jardin

	lvl1->localizarPlanta(p1->getposicionX(), p1->getposicionY());
	lvl1->localizarZombie(z1->getPosicionX(), z1->getPosicionY());

	lvl1->generar();

	// Ahora se llama a la funcion que verifica si el Zombie tiene un obstaculo en frente
	// Si no es asi el zombie se movera, pero si hay obstaculo no lo hara 
	if (lvl1->Choques(z1->getPosicionX(), z1->getPosicionY()) == true) {
		z1->moverse();
	}
	else cout << "El Zombie se encontro con una planta"<<endl;

	cout << "El nombre del zombie es: " << z1->getNombre() << endl;
	cout << "La energia del zombie es: " << z1->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << z1->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << z1->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << z1->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << z1->getTipoZombie() << endl;

	cout << "La energia de la planta es: " << p1->getEnergia() << endl;
	cout << "La planta se encuetra en la fila: " << p1->getposicionX() << endl;
	cout << "La planta se encuetra en la columna: " << p1->getposicionY() << endl;
	cout << "El tipo de planta es: " << p1->getTipoPlanta() << endl;

	lvl1->generar();
	return 0;
};