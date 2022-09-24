#include <iostream>
#include "Gerente.h"
#include "Vendedor.h"
using namespace std;

int main() {
	Empregado e1;
	Gerente g1;
	Vendedor v1;

	e1.setNome("Fabricio");
	e1.setSalario(1500);

	g1.setDepartamento("obras");
	g1.setNome("Luis");

	v1.setNome("Gustavo");
	v1.setSalario(1000);
	v1.setComissao(15);

	e1.exibirInformacoes();
	g1.infosGerente();
	v1.infoVendedor();
}