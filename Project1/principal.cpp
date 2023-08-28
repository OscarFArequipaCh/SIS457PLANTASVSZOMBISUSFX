#include <iostream>
#include "Zombie.h"
#include "ZombieSaltador.h"
#include "Jardin.h"
#include "planta.h"

using namespace std;

int main() {

	Jardin* lvl1 = new Jardin();

	Zombie* z1 = new Zombie("Juan");

	ZombieSaltador* z2 = new ZombieSaltador();

	planta* p1 = new planta(1,4);

	do {
		cout << "El nombre del zombie es: " << z1->getNombre() << endl;
		cout << "La energia del zombie es: " << z1->getEnergia() << endl;
		cout << "La velocidad del zombie es: " << z1->getVelocidad() << endl;
		cout << "La posicion X del zombie es: " << z1->getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << z1->getPosicionY() << endl;
		cout << "El tipo de zombie es: " << z1->getTipoZombie() << endl;

		cout << "El nombre del zombie es: " << z2->getNombre() << endl;
		cout << "La energia del zombie es: " << z2->getEnergia() << endl;
		cout << "La velocidad del zombie es: " << z2->getVelocidad() << endl;
		cout << "La posicion X del zombie es: " << z2->getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << z2->getPosicionY() << endl;
		cout << "El tipo de zombie es: " << z2->getTipoZombie() << endl;

		cout << "La energia de la planta es: " << p1->getEnergia() << endl;
		cout << "La planta se encuetra en la fila: " << p1->getposicionX() << endl;
		cout << "La planta se encuetra en la columna: " << p1->getposicionY() << endl;
		cout << "El tipo de planta es: " << p1->getTipoPlanta() << endl;

		// Se envia su posicion para que la clase jardin busque su ubicacion
		lvl1->localizarPlanta(p1->getposicionX(), p1->getposicionY());
		lvl1->localizarZombie(z1->getPosicionX(), z1->getPosicionY());
		lvl1->localizarZombie(z2->getPosicionX(), z2->getPosicionY());
		// se actualiza el Jardin
		lvl1->generar();
		// Se espera orden
		system("pause");
		system("cls");
		if (lvl1->Choques(z2->getPosicionX(), z2->getPosicionY()) == false) {
			z2->moverse();
		}
		// El zombie Juan se mueve, verificando que no tenga obstaculos en su camino
		if (lvl1->Choques(z1->getPosicionX(), z1->getPosicionY()) == false) {
			z1->moverse();
		}
		else {
			// Como el Zombie encontro un obstaculo, mordera hasta destruirlo
			do {
				p1->recibirDaño(z1->morder());
				cout << "el Zombie " << z1->getNombre() << " muerde a la planta " << p1->getTipoPlanta() << endl;
			} while (p1->getEnergia() > 0);
			// Una vez sin energia la planta, se la quitara del jardin y el zombie continuara su camino
			p1->morir();
			z1->moverse();
			cout << "el Zombie " << z1->getNombre() << " se comio a la planta " << p1->getTipoPlanta() << endl;
		};
		// se repetira hasta que el zombie cruce todo el jardin
	} while (lvl1->gameover(z1->getPosicionX()) == false);
	// se termino el ciclo, quiere decir que el zombie logro cruzar el jardin y llegar a la casa
	cout << "Te Han Comido el Cerebro" << endl;
	return 0;
};