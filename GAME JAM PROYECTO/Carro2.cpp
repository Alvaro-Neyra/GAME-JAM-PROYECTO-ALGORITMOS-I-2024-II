#include "Carro2.h"

Carro2::Carro2(int x, int y, int tipo)
	:Carro(x, y, tipo)
{

}

Carro2::~Carro2() {

}

void Carro2::mostrar(Graphics^ panel) {
	switch (tipo) {
	case 1: {
		// Forma circular
		panel->DrawString("2", gcnew Font("Arial", 10), Brushes::Black, x + (ancho / 2) - 5, y - 25);
		SolidBrush^ brocha = gcnew SolidBrush(Color::DarkBlue);
		panel->FillEllipse(brocha, x, y, alto, ancho);
		break;
	}
	case 2: {
		// Forma carro
		break;
	}
	}
}