#pragma once
#include "Empregado.h"

class Gerente : public Empregado
{
public: 
	void setDepartamento(string departamento);
	string getDepartamento();
	void infosGerente();
private:
	string departamento;
};
