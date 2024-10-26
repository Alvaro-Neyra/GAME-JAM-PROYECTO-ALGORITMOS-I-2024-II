#include "Carro1.h"

Carro1::Carro1(int x, int y, int tipo) 
	:Carro(x, y, tipo)
{

}

Carro1::~Carro1() {

}

void Carro1::mostrar(Graphics^ panel) {
	switch (tipo) {
		case 1: {
			// Forma circular
			panel->DrawString("1", gcnew Font("Arial", 10), Brushes::Black, x + (ancho / 2) - 5, y - 25);
			SolidBrush^ brocha = gcnew SolidBrush(Color::DarkCyan);
			panel->FillEllipse(brocha, x, y, alto, ancho);
			break;
		}
		case 2: {
			// Forma carro
			break;
		}
	}
}