#include "Empregado.h"
using namespace std;

void Empregado::setNome(string nome) { 
	this->nome = nome;
}
void Empregado::setSalario(float salario) {
	this->salario = salario;
}
string Empregado::getNome() {
	return nome;
}
float Empregado::getSalario() {
	return salario;
}
void Empregado::exibirInformacoes() {
	cout << "O salario de " << nome << " eh R$ " << salario << endl;
}