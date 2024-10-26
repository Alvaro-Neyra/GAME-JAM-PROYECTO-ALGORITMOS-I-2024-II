#pragma once
#include "Carro.h"
#include "Carro1.h"
#include "Carro2.h"
#include "Carro3.h"
#include <vector>

using namespace std;

class Carrera
{
private:
	vector<Carro*> carros;
	int xLineaFinal;
	bool terminarCarrera;
	int maximoDeCarreras = 1;
	int carroGanador = 0;
public:
	Carrera(int xCarro1, int yCarro1, int xCarro2, int yCarro2, int xCarro3, int yCarro3);
	~Carrera();
	void establecerTerminarCarrera(bool estadoCarrera);
	bool obtenerCarrera();
	void mover();
	void pararCarrera();
	void mostrar(Graphics^ panel);
	int victoriasCarro1();
	int victoriasCarro2();
	int victoriasCarro3();
	int obtenerCarroGanador();
};


