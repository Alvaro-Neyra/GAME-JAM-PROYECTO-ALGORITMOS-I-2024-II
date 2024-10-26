#pragma once
#include "Carro.h"

class Carro2 : public Carro
{
public:
	Carro2(int x, int y, int tipo);
	~Carro2();
	void mostrar(Graphics^ panel) override;
};

