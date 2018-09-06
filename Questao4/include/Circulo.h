#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo:FiguraGeometrica{

	protected:

		double raio;

	public:

        Circulo();
		double getRaio();
		void setRaio(double r);
        double calcularArea();
};

#endif
