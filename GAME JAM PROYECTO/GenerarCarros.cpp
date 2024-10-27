#include "GenerarCarros.h"

GenerarCarros::GenerarCarros(int xCarro1, int yCarro1, int xCarro2, int yCarro2, int xCarro3, int yCarro3) {
	carros.push_back(new Carro1(xCarro1, yCarro1, 1));
	carros.push_back(new Carro2(xCarro2, yCarro2, 1));
	carros.push_back(new Carro3(xCarro3, yCarro3, 1));
    cantidadDeCarros = carros.size();
}

GenerarCarros::~GenerarCarros() {
	for (size_t i = 0; i < carros.size(); i++) {
		delete carros[i];
	}
}

void GenerarCarros::mover(Graphics^ panel) {
    for (size_t i = 0; i < carros.size(); i++) {
        carros[i]->cambiarDireccionEnLimites(panel->VisibleClipBounds.Width, panel->VisibleClipBounds.Height);
        carros[i]->moverEjes();
    }
}

void GenerarCarros::cambiarVelocidad() {
	for (size_t i = 0; i < carros.size(); i++) {
		carros[i]->generarDerivados();
	}
}

void GenerarCarros::pararCarros() {
	for (size_t i = 0; i < carros.size(); i++) {
		carros[i]->pararEjes();
	}
}

void GenerarCarros::agregarCarros(int tipoCarro, Graphics^ panel) {
	Random r;
	int x = r.Next(0, panel->VisibleClipBounds.Right - 100);
	int y = r.Next(0, panel->VisibleClipBounds.Bottom - 100);

	switch (tipoCarro) {
		case 1: {
			carros.push_back(new Carro1(x, y, 1));
			break;
		}
		case 2: {
			carros.push_back(new Carro2(x, y, 1));
			break;
		}
		case 3: {
			carros.push_back(new Carro3(x, y, 1));
			break;
		}
	}
    cantidadDeCarros++;
}

void GenerarCarros::mostrarCarros(Graphics^ panel) {
    vector<size_t> indicesAEliminar;

    for (size_t i = 0; i < carros.size(); i++) {
        carros[i]->mostrar(panel);
        if (cantidadDeCarros < 20) {
            for (size_t j = 0; j < carros.size(); j++) {
                if (j != i) {
                    if (!carros[i]->estaEnColision() && !carros[j]->estaEnColision()) {

                        if ((dynamic_cast<Carro3*>(carros[i]) && dynamic_cast<Carro2*>(carros[j])) ||
                            (dynamic_cast<Carro2*>(carros[i]) && dynamic_cast<Carro3*>(carros[j]))) {
                            if (carros[i]->getRectangle().IntersectsWith(carros[j]->getRectangle())) {
                                carros[i]->marcarColision();
                                carros[j]->marcarColision();
                                indicesAEliminar.push_back(i);
                                indicesAEliminar.push_back(j);
                            }
                        }
                        else if ((dynamic_cast<Carro3*>(carros[i]) && dynamic_cast<Carro1*>(carros[j])) ||
                            (dynamic_cast<Carro1*>(carros[i]) && dynamic_cast<Carro3*>(carros[j]))) {
                            if (carros[i]->getRectangle().IntersectsWith(carros[j]->getRectangle())) {
                                carros[i]->invertirDireccion();
                                carros[j]->invertirDireccion();
                                carros[i]->marcarColision();
                                carros[j]->marcarColision();
                            }
                        }
                        else if ((dynamic_cast<Carro2*>(carros[i]) && dynamic_cast<Carro1*>(carros[j])) ||
                            (dynamic_cast<Carro1*>(carros[i]) && dynamic_cast<Carro2*>(carros[j]))) {
                            if (carros[i]->getRectangle().IntersectsWith(carros[j]->getRectangle())) {
                                carros[i]->marcarColision();
                                carros[j]->marcarColision();

                                if (!carros[i]->estabaEnColision() && !carros[j]->estabaEnColision()) {
                                    agregarCarros(1, panel);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (size_t e = indicesAEliminar.size(); e > 0; e--) {
        size_t index = indicesAEliminar[e - 1];
        if (index < carros.size()) {
            carros.erase(carros.begin() + index);
            cantidadDeCarros--;
        }
    }

    for (size_t i = 0; i < carros.size(); i++) {
        carros[i]->actualizarEstadoDeColision();
        carros[i]->resetearColision();
    }
}


int GenerarCarros::getCantidadDeCarros() {
    return this->cantidadDeCarros;
}
void GenerarCarros::setCantidadDeCarros(int _cantidad) {
    this->cantidadDeCarros = _cantidad;
}