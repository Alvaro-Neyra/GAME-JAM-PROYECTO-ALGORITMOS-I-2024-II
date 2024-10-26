#include "Carro3.h"

Carro3::Carro3(int x, int y, int tipo)
	:Carro(x, y, tipo)
{

}

Carro3::~Carro3() {

}

void Carro3::mostrar(Graphics^ panel) {
	switch (tipo) {
	case 1: {
		// Forma circular
		panel->DrawString("3", gcnew Font("Arial", 10), Brushes::Black, x + (ancho / 2) - 5, y - 25);
		SolidBrush^ brocha = gcnew SolidBrush(Color::DeepPink);
		panel->FillEllipse(brocha, x, y, alto, ancho);
		break;
	}
	case 2: {
		// Forma carro
		break;
	}
	}
}