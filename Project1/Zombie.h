#pragma once

#include <iostream>

using namespace std;

class Zombie
{
private:
	int energia = 100;
	int nivelFuria;
	int armadura = 0;

	string tipoZombie;
	string nombre;

protected:
	float posicionX;
	float posicionY;
	int direccionX;
	int direccionY;
	int velocidad;

public:
	//Contructores
	Zombie();
	Zombie(string _nombre);
	Zombie(string _nombre, int _armadura, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie);

	//Metodos accesores
	void setEnergia(int _energia) { energia = _energia; }
	int getEnergia() { return energia; }

	void setArmadura(int _armadura) { armadura = _armadura; }
	int getArmadura() { return armadura; }

	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
	int getNivelFuria() { return nivelFuria; }

	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	int getVelocidad() { return velocidad; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setTipoZombie(string _tipoZombie) { tipoZombie = _tipoZombie; }
	string getTipoZombie() { return tipoZombie; }



	//Metodos propios
	void moverse();
	void moverse(float, float);
	void moverse(float, float, int);

	void atacar();
	void morir();
	void morder();
};

