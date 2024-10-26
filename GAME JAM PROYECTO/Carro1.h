#pragma once
#include "Carro.h"

class Carro1 : public Carro
{
public:
	Carro1(int x, int y, int tipo);
	~Carro1();
	void mostrar(Graphics^ panel) override;
};

