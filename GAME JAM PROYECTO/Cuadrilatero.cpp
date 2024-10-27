#include "Cuadrilatero.h"

Cuadrilatero::Cuadrilatero(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int tipo)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
	this->x4 = x4;
	this->y4 = y4;
	this->tipo = tipo;
}

Cuadrilatero::~Cuadrilatero() {}

void Cuadrilatero::dibujar(Graphics^ panel) {
	Color colorFigura;
	switch (tipo) {
	case 1: colorFigura = Color::Red; break;
	case 2: colorFigura = Color::Green; break;
	case 3: colorFigura = Color::Blue; break;
	case 4: colorFigura = Color::Yellow; break;
	case 5: colorFigura = Color::Purple; break;
	case 6: colorFigura = Color::Orange; break;
	case 7: colorFigura = Color::Brown; break;
	case 8: colorFigura = Color::DarkGreen; break;
	case 9: colorFigura = Color::DarkBlue; break;
	case 10: colorFigura = Color::Black; break;
	default: colorFigura = Color::White; break;
	}

	SolidBrush^ brocha = gcnew SolidBrush(colorFigura);

	array<Point>^ puntos = gcnew array <Point>(4) {
		Point(x1, y1),
			Point(x2, y2),
			Point(x3, y3),
			Point(x4, y4)
	};

	panel->FillPolygon(brocha, puntos);
}

void Cuadrilatero::borrar(Graphics^ panel) {
	SolidBrush^ brocha = gcnew SolidBrush(Color::White);
	array<Point>^ puntos = gcnew array <Point>(4) {
		Point(x1, y1),
			Point(x2, y2),
			Point(x3, y3),
			Point(x4, y4)
	};

	panel->FillPolygon(brocha, puntos);
}
