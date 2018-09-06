#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo:FiguraGeometrica{

	protected:

		double base;
		double altura;

	public:

        Triangulo();
		double getBase();
		double getAltura();
		void setBase(double b);
		void setAltura(double h);
		double calcularArea();
};

#endif
