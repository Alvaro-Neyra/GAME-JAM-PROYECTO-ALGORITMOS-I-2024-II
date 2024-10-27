#pragma once
#include "Figura.h"

class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(float x, float y, float radio);
    ~Circulo();
    void dibujar(Graphics^ panel) override;
    void borrar(Graphics^ panel) override;
};
