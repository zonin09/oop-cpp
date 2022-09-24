#pragma once
#include "Empregado.h"

class Vendedor : public Empregado
{
public: 
	float calcularSalario();
	void setComissao(int comissao);
	int getComissao();
	void infoVendedor();
private: 
	float percentual;
	float calculo;
	float comissao;
	float salarioAjustado;
};