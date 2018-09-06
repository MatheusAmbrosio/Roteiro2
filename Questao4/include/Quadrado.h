#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado:FiguraGeometrica{

	protected:

		double lado;

	public:

        Quadrado();
		double getLado();
		void setLado(double l);
		double calcularArea();
};

#endif
