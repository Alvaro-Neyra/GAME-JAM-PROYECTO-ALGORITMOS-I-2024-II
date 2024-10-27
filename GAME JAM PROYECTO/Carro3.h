#pragma once
#include "Carro.h"

class Carro3 : public Carro
{
private:
	int tipoColor;
public:
	Carro3(int x, int y, int tipo);
	~Carro3();
	void mostrar(Graphics^ panel) override;
};

