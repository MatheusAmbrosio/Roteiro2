#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main(void){

	Quadrado q = Quadrado();
	Triangulo t = Triangulo();
	Circulo c = Circulo();

	q.setLado(4);
    cout << q.calcularArea() << endl;

    t.setAltura(4);
    t.setBase(3);
    cout << t.calcularArea() << endl;

    c.setRaio(2);
    cout << c.calcularArea() << endl;

	return 0;
}
