#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor:Funcionario{

	public:

        Consultor();

		double getSalario();
		double getSalario(float p);

};

#endif
