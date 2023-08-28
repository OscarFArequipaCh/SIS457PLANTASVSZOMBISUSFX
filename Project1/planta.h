#pragma once
#include <iostream>

using namespace std;
class planta
{
private:
	int Energia;
	int CostoSol = 0;
	int posicionX;
	int posicionY;
	float recarga = 0.0f;

	string TipoPlanta;

	bool duerme;
	bool Acuatica;
public:

	planta(int _posicionX, int posicionY);

	void setEnergia(int _Energia) { Energia = _Energia; };
	int getEnergia() { return Energia; };
	void setCostosol(int _Costosol) { CostoSol = _Costosol; };
	int getCostosol() { return CostoSol; };
	void setposicionX(int _posicionX) { posicionX = _posicionX; };
	int getposicionX() { return posicionX; };
	void setposicionY(int _posicionY) { posicionY = _posicionY; };
	int getposicionY() { return posicionY; };
	void setrecarga(float _recarga) { recarga = _recarga; };
	float getrecarga() { return recarga; };
	void setTipoPlanta(string _TipoPlanta) { TipoPlanta = _TipoPlanta; };
	string getTipoPlanta() { return TipoPlanta; };
	void setduerme(bool _duerme) { duerme = _duerme; };
	bool getduerme() { return duerme; };
	void setAcuatica(bool _Acuatica) { Acuatica = _Acuatica; };
	bool getAcuatica() { return Acuatica; };

	bool invocar(int _soldisponible);
	void morir();
	void recibirDaño(int _daño);
};

