#pragma once
using namespace System::Drawing;


class Cuadrilatero
{
private:
	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;
	int tipo;
public:
	Cuadrilatero(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int tipo);
	~Cuadrilatero();

	void dibujar(Graphics^ panel);
	void borrar(Graphics^ panel);
};

