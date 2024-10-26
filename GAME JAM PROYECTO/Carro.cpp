#include "Carro.h"

Carro::Carro(int x, int y, int tipo) {
	this->x = x;
	this->y = y;
	this->tipo = tipo;
	ancho = 100;
	alto = 100;
	puntos = 0;
	Random r;
	dx = r.Next(5, 16);
	dy = r.Next(5, 16);
	System::Threading::Thread::Sleep(10);
}
Carro::~Carro() {

}
void Carro::pararEjeX() {
	dx = 0;
}
void Carro::pararEjes() {
	dx = 0;
	dy = 0;
}
void Carro::moverEjeX() {
	x -= dx;
	dy = 0;
}
void Carro::moverEjes() {
	x += dx;
	y += dy;
}
void Carro::generarDerivados() {
	Random r;
	dx = (rand() % 11 + 5) * (rand() % 1 * 2 - 1);
	dy = (rand() % 11 + 5) * (rand() % 1 * 2 - 1);
}
void Carro::cambiarDireccionEnLimites(int panelAncho, int panelAlto) {
	if (x < 0 || x + ancho > panelAncho) {
		dx *= -1;
	}

	if (y < 0 || y + alto > panelAlto) {
		dy *= -1;
	}
}
int Carro::getX() {
	return this->x;
}
int Carro::getY() {
	return this->y;
}
int Carro::getDx() {
	return this->dx;
}
int Carro::getDy() {
	return this->dy;
}
void Carro::setX(int x) {
	this->x = x;
}
void Carro::setY(int y) {
	this->y = y;
}
void Carro::aumentarPuntos() {
	this->puntos++;
}
int Carro::obtenerPuntos() {
	return this->puntos;
}
void Carro::setDx(int dx) {
	this->dx = dx;
}
void Carro::setDy(int dy) {
	this->dy = dy;
}

void Carro::generarVelocidadDerivada() {
	this->dx = (rand() % 11 + 5);
}

Rectangle Carro::getRectangle() {
	return Rectangle(x, y, ancho, alto);
}

void Carro::mostrar(Graphics^ panel) {

}