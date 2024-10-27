#pragma once

using namespace System::Drawing;

class Figura
{
protected:
    float x, y;

public:
    Figura(float x, float y);
    ~Figura();

    virtual void dibujar(Graphics^ panel) = 0;
    virtual void borrar(Graphics^ panel) = 0;
};

