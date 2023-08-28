#include "Jardin.h"

Jardin::Jardin()
{
	limitX = 900.0f;
	limitY = 500.0f;
	perder = false;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			cuadros[i][j] = "_";
		}
	}
}

void Jardin::generar() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			cout << cuadros[i][j] << "|";
		}
		cout << endl;
	}
}

bool Jardin::gameover(float _posicion)
{
	if (_posicion <= 0) {
		perder = true;
	}
	return perder;
}

void Jardin::localizarZombie(float _posicionX, float _posicionY) {
	_posicionX = _posicionX / 90;
	_posicionY = _posicionY / 100;
	for (int i = 0; i < 5; i++) {
		if (i >= _posicionY - 1) {
			for (int j = 0; j < 9; j++) {
				if (j >= _posicionX - 1) {
					cuadros[i][j] = "*";
					_posicionX = 10;
				}
				else {
					if(cuadros[i][j] != "_" || cuadros[i][j] != "+") cuadros[i][j] = "_";
				}
			}
			_posicionY = 6;
		}
	}
}

void Jardin::localizarPlanta(int _posicionX, int _posicionY) 
{
	for (int i = 0; i < 5; i++) {
		if (i == _posicionY - 1) {
			for (int j = 0; j < 9; j++) {
				if (j == _posicionX - 1) {
					cuadros[i][j] = "+";
					_posicionX = 10;
				}
			}
			_posicionY = 6;
		}
	}
}
