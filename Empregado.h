#include <iostream> 
using namespace std;

#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado
{
public:
	void setNome(string nome);
	void setSalario(float salario);
	string getNome();
	float getSalario();
	void exibirInformacoes();
protected:
	string nome;
	float salario;
};
#endif