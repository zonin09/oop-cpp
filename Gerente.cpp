#include "Gerente.h"
using namespace std;

void Gerente::setDepartamento(string departamento) {
	this->departamento = departamento;
}
string Gerente::getDepartamento() {
	return departamento;
}
void Gerente::infosGerente() {
	cout << "O gerente " << nome << " gerencia o departamento de " << departamento << endl;
}