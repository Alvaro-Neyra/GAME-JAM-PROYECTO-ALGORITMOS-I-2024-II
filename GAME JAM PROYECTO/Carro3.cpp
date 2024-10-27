#include "Carro3.h"
#include "Cuadrilatero.h"

Carro3::Carro3(int x, int y, int tipo)
	:Carro(x, y, tipo)
{
	tipoColor = (rand() % 8 + 1);
}

Carro3::~Carro3() {

}

void Carro3::mostrar(Graphics^ panel) {
	switch (tipo) {
	case 1: {
		// Forma circular
		panel->DrawString("3", gcnew Font("Arial", 10), Brushes::Black, x + (ancho / 2) - 5, y - 25);
		Pen^ brocha = gcnew Pen(Color::DeepPink);
		panel->DrawEllipse(brocha, x, y, alto, ancho);
		break;
	}
	case 2: {
		// Forma carro
		Color colorFigura;
		switch (tipoColor) {
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
		SolidBrush^ brochaBlanca = gcnew SolidBrush(Color::White);
		Cuadrilatero* pieza1 = new Cuadrilatero(x + 26.9, y + 1.8, x + 32.7, y + 1.8, x + 28.5, y + 9.2, x + 23.5, y + 7.2, tipoColor);
		Cuadrilatero* pieza2 = new Cuadrilatero(x + 23, y + 8.2, x + 28.3, y + 10.1, x + 24.1, y + 17.4, x + 18.8, y + 15.4, tipoColor);
		Cuadrilatero* pieza3 = new Cuadrilatero(x + 18.2, y + 16.2, x + 23.2, y + 18.2, x + 19.5, y + 24.5, x + 13.1, y + 24.5, tipoColor);
		Cuadrilatero* pieza4 = new Cuadrilatero(x + 3.8, y + 25.5, x + 12.8, y + 25.5, x + 12.8, y + 32.6, x + 3.8, y + 32.6, tipoColor);
		Cuadrilatero* pieza5 = new Cuadrilatero(x + 14, y + 25.5, x + 22.6, y + 25.5, x + 22.6, y + 32.6, x + 14, y + 32.6, tipoColor);
		Cuadrilatero* pieza6 = new Cuadrilatero(x + 23.8, y + 25.5, x + 31, y + 25.5, x + 31, y + 32.6, x + 23.8, y + 32.6, tipoColor);
		Cuadrilatero* pieza7 = new Cuadrilatero(x + 32.3, y + 25.5, x + 41, y + 25.5, x + 41, y + 32.6, x + 32.3, y + 32.6, tipoColor);
		Cuadrilatero* pieza8 = new Cuadrilatero(x + 42.2, y + 25.5, x + 52, y + 25.5, x + 52, y + 32.6, x + 42.2, y + 32.6, tipoColor);
		Cuadrilatero* pieza9 = new Cuadrilatero(x + 44.5, y + 27.9, x + 47.3, y + 27.9, x + 47.3, y + 29.7, x + 44.5, y + 29.7, tipoColor);
		Cuadrilatero* pieza10 = new Cuadrilatero(x + 34, y + 1.8, x + 52, y + 1.8, x + 52, y + 8.2, x + 30.3, y + 8.2, tipoColor);
		Cuadrilatero* pieza11 = new Cuadrilatero(x + 53.4, y + 1.8, x + 59.7, y + 1.8, x + 59.7, y + 24.3, x + 53.4, y + 24.3, tipoColor);
		Cuadrilatero* pieza12 = new Cuadrilatero(x + 61.1, y + 1.8, x + 75.9, y + 1.8, x + 75.9, y + 8.2, x + 61.1, y + 8.2, tipoColor);
		Cuadrilatero* pieza13 = new Cuadrilatero(x + 77.3, y + 1.8, x + 83.7, y + 1.8, x + 83.7, y + 8.2, x + 77.3, y + 8.2, tipoColor);
		Cuadrilatero* pieza14 = new Cuadrilatero(x + 84.6, y + 1.8, x + 89.9, y + 1.8, x + 94.3, y + 24.3, x + 87.7, y + 24.3, tipoColor);
		Cuadrilatero* pieza15 = new Cuadrilatero(x + 88.1, y + 25.5, x + 94.7, y + 25.5, x + 94.7, y + 32.6, x + 88.1, y + 32.6, tipoColor);
		Cuadrilatero* pieza16 = new Cuadrilatero(x + 77.1, y + 25.5, x + 86.8, y + 25.5, x + 86.9, y + 32.6, x + 77.1, y + 32.6, tipoColor);
		Cuadrilatero* pieza17 = new Cuadrilatero(x + 61.1, y + 25.5, x + 75.9, y + 25.5, x + 75.9, y + 32.6, x + 61.1, y + 32.6, tipoColor);
		Cuadrilatero* pieza18 = new Cuadrilatero(x + 53.4, y + 25.5, x + 59.7, y + 25.5, x + 59.7, y + 40.8, x + 53.4, y + 40.8, tipoColor);
		Cuadrilatero* pieza19 = new Cuadrilatero(x + 42.2, y + 33.8, x + 52, y + 33.8, x + 52, y + 40.8, x + 42.2, y + 40.8, tipoColor);
		Cuadrilatero* pieza20 = new Cuadrilatero(x + 3.8, y + 42.1, x + 14.1, y + 42.1, x + 14.1, y + 48.7, x + 3.8, y + 48.7, tipoColor);
		Cuadrilatero* pieza21 = new Cuadrilatero(x + 3.8, y + 33.8, x + 41, y + 33.8, x + 41, y + 40.8, x + 3.8, y + 40.8, tipoColor);
		Cuadrilatero* pieza22 = new Cuadrilatero(x + 33.5, y + 42.1, x + 59.7, y + 42.1, x + 59.7, y + 48.7, x + 33.5, y + 48.7, tipoColor);
		Cuadrilatero* pieza23 = new Cuadrilatero(x + 87.2, y + 42.1, x + 94.7, y + 42.1, x + 94.7, y + 48.7, x + 87.2, y + 48.7, tipoColor);
		Cuadrilatero* pieza24 = new Cuadrilatero(x + 61.1, y + 33.8, x + 94.7, y + 33.8, x + 94.7, y + 40.8, x + 61.1, y + 40.8, tipoColor);
		Cuadrilatero* pieza25 = new Cuadrilatero(x + 61.1, y + 33.7, x + 75.9, y + 33.7, x + 75.9, y + 48.7, x + 61.1, y + 48.8, tipoColor);
		pieza1->dibujar(panel);
		pieza2->dibujar(panel);
		pieza3->dibujar(panel);
		pieza4->dibujar(panel);
		pieza5->dibujar(panel);
		pieza6->dibujar(panel);
		pieza7->dibujar(panel);
		pieza8->dibujar(panel);
		pieza9->borrar(panel);
		pieza10->dibujar(panel);
		pieza11->dibujar(panel);
		pieza12->dibujar(panel);
		pieza13->dibujar(panel);
		pieza14->dibujar(panel);
		pieza15->dibujar(panel);
		pieza16->dibujar(panel);
		pieza17->dibujar(panel);
		pieza18->dibujar(panel);
		pieza19->dibujar(panel);
		pieza20->dibujar(panel);
		pieza21->dibujar(panel);
		pieza22->dibujar(panel);
		pieza23->dibujar(panel);
		pieza24->dibujar(panel);
		pieza25->dibujar(panel);

		panel->FillEllipse(brochaBlanca, x + 12, y + 35.8, 24, 24);
		panel->FillEllipse(brocha, x + 15, y + 37.8, 17.6, 17.6);
		panel->FillEllipse(brochaBlanca, x + 20, y + 43.2, 7.5, 7.5);
		panel->FillEllipse(brochaBlanca, x + 65, y + 35.8, 24, 24);
		panel->FillEllipse(brocha, x + 68, y + 37.8, 17.6, 17.6);
		panel->FillEllipse(brochaBlanca, x + 73, y + 43.2, 7.5, 7.5);
		
		delete pieza1;
		delete pieza2;
		delete pieza3;
		delete pieza4;
		delete pieza5;
		delete pieza6;
		delete pieza7;
		delete pieza8;
		delete pieza9;
		delete pieza10;
		delete pieza11;
		delete pieza12;
		delete pieza13;
		delete pieza14;
		delete pieza15;
		delete pieza16;
		delete pieza17;
		delete pieza18;
		delete pieza19;
		delete pieza20;
		delete pieza21;
		delete pieza22;
		delete pieza23;
		delete pieza24;
		delete pieza25;
		break;
	}
	}
}