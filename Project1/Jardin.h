#pragma once

#include <iostream>

using namespace std;

class Jardin
{
private:
	float limitX;
	float limitY;
	bool perder;
	string cuadros[5][9];

public:

	Jardin();

	bool gameover(float _posicion);
	void generar();
	void localizarZombie(float _posicionX, float _posicionY);
	void localizarPlanta(int _posicionX, int _posicionY);

	void setlimitX(float _limitX) { limitX = _limitX; };
	float getlimitX() { return limitX; };
	void setlimitY(float _limitY) { limitY = _limitY; };
	float getlimitY() { return limitY; };
	void setperder(bool _perder) { perder = _perder; };
	bool getperder() { return perder; };
};

