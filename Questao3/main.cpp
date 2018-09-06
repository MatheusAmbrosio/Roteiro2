#include <iostream>
#include "Consultor.h"

using namespace std;

int main(){

	Consultor c1 = Consultor();

	c1.setNome("Matheus");
	c1.setMatricula(12864912);
	c1.setSalario(2000);

	c1.getSalario(0.2);

	cout << endl;
	cout << "Nome: " << c1.getNome() << endl;
	cout << "Matricula: " << c1.getMatricula() << endl;
	cout << "Salario: " << c1.getSalario() << endl;

	return 0;
}
