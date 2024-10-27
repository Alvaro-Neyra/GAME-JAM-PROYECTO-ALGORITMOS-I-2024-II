#pragma once
#include "random"
#include <vector>
#include "Carro.h"
#include "Carro1.h"
#include "Carro2.h"
#include "Carro3.h"

using namespace std;

class GenerarCarros
{
private:
	int cantidadDeCarros;
	vector<Carro*> carros;
public:
	GenerarCarros(int xCarro1, int yCarro1, int xCarro2, int yCarro2, int xCarro3, int yCarro3);
	~GenerarCarros();
	void mover(Graphics^ panel);
	void cambiarVelocidad();
	void pararCarros();
	void agregarCarros(int tipoCarro, Graphics^ panel);
	void mostrarCarros(Graphics^ panel);
	int getCantidadDeCarros();
	void setCantidadDeCarros(int _cantidad);
};

