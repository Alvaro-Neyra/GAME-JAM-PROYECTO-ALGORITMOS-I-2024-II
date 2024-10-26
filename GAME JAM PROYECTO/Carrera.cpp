#include "Carrera.h"

Carrera::Carrera(int xCarro1, int yCarro1, int xCarro2, int yCarro2, int xCarro3, int yCarro3) {
	xLineaFinal = 5;
	terminarCarrera = false;
	carros.push_back(new Carro1(xCarro1, yCarro1, 1));
	carros.push_back(new Carro2(xCarro2, yCarro2, 1));
	carros.push_back(new Carro3(xCarro3, yCarro3, 1));
}

Carrera::~Carrera() {
	for (Carro* carro : carros) {
		delete carro;
	}
}

void Carrera::establecerTerminarCarrera(bool estadoCarrera) {
	this->terminarCarrera = estadoCarrera;
}

bool Carrera::obtenerCarrera() {
	return this->terminarCarrera;
}

void Carrera::mover() {
	for (size_t i = 0; i < carros.size(); i++) {
		carros[i]->moverEjeX();
	}
}

void Carrera::pararCarrera() {
	for (size_t i = 0; i < carros.size(); i++) {
		carros[i]->pararEjeX();
	}
}

void Carrera::mostrar(Graphics^ panel) {
	Rectangle lineaDeRectaFinal = Rectangle(xLineaFinal, 0, 20, panel->VisibleClipBounds.Height);
	panel->FillRectangle(Brushes::Gray, lineaDeRectaFinal);
	for (size_t i = 0; i < carros.size(); i++) {
		carros[i]->mostrar(panel);
		//if (lineaDeRectaFinal.IntersectsWith(carros[i]->getRectangle())) {
		//	if (rondas == maximoDeCarreras) {
		//		pararCarrera();
		//		establecerTerminarCarrera(true);

		//		// Comparandos los puntos de cada carro
		//		for (size_t i = 0; i < carros.size(); i++) {
		//			for (size_t j = 0; j < carros.size(); j++) {
		//				if (carros[i]->obtenerPuntos() > carros[j]->obtenerPuntos()) {
		//					carroGanador = i;
		//				}
		//			}
		//		}
		//	}
		//	else {
		//		if (lineaDeRectaFinal.IntersectsWith(carros[i]->getRectangle())) {
		//			carros[i]->aumentarPuntos();
		//		}

		//		// Iterando el vector carros
		//		for (size_t i = 0; i < carros.size(); i++) {
		//			carros[i]->setX(1050);
		//			carros[i]->generarVelocidadDerivada();
		//		}
		//	}
		//	rondas++;
		//}

		if (lineaDeRectaFinal.IntersectsWith(carros[i]->getRectangle())) {
			carros[i]->aumentarPuntos();
			pararCarrera();
			establecerTerminarCarrera(true);
			carroGanador = i;
			for (size_t i = 0; i < carros.size(); i++) {
				carros[i]->setX(1050);
			}
		}
	}
}

int Carrera::victoriasCarro1() {
	if (!carros.empty()) {
		return carros[0]->obtenerPuntos();
	}
	else {
		return 0;
	}
}
int Carrera::victoriasCarro2() {
	if (!carros.empty()) {
		return carros[1]->obtenerPuntos();
	}
	else {
		return 0;
	}
}
int Carrera::victoriasCarro3() {
	if (!carros.empty()) {
		return carros[2]->obtenerPuntos();
	}
	else {
		return 0;
	}
}

int Carrera::obtenerCarroGanador() {
	return this->carroGanador;
}