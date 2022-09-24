#include "Vendedor.h"
using namespace std;

void Vendedor::setComissao(int comissao) {
	this->comissao = comissao;
}

int Vendedor::getComissao() {
	return comissao;
}

float Vendedor::calcularSalario() {
	percentual = comissao / 100;
	calculo = salario * percentual;
	salarioAjustado = salario + calculo;
	return salarioAjustado;
}
void Vendedor::infoVendedor() {
	cout << "O nome do vendedor eh " << nome << "." << endl << "Seu salario sem comissao eh R$ " << salario << endl <<
	"Seu salario com comissao eh R$ " << calcularSalario() << endl << "E sua comissao eh de " << comissao << "%" << endl;
}
