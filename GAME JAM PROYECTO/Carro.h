#pragma once
#include <iostream>

using namespace System;
using namespace System::Drawing;

class Carro
{
protected:
	int x;
	int y;
	int ancho;
	int alto;
	int dx;
	int dy;
	int puntos;
	int tipo;
public:
	int carroGanador;
	Carro(int x, int y, int tipo);
	~Carro();
	void pararEjeX();
	void pararEjes();
	void moverEjeX();
	void moverEjes();
	void generarDerivados();
	void generarVelocidadDerivada();
	void cambiarDireccionEnLimites(int panelAncho, int panelAlto);
	int getX();
	int getY();
	int getDx();
	int getDy();
	void setX(int x);
	void setY(int y);
	void aumentarPuntos();
	int obtenerPuntos();
	void setDx(int dx);
	void setDy(int dy);
	Rectangle getRectangle();
	virtual void mostrar(Graphics^ panel);
};

