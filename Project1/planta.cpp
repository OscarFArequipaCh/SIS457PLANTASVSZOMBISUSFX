#include "planta.h"

planta::planta(int _posicionX, int _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	Energia = 100;
	duerme = false;
	Acuatica = false;
	TipoPlanta = "semilla";
}

bool planta::invocar(int _soldisponible)
{
	if (CostoSol <= _soldisponible) return true;
	return false;
}

void planta::morir()
{
	if (Energia <= 0) {
		posicionX = NULL;
		posicionY = NULL;
	}
}

void planta::recibirDaño() {
	Energia = Energia - 20;
}
