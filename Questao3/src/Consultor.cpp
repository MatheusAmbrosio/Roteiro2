#include "Consultor.h"

Consultor::Consultor(){
	matricula = "";
	nome = "";
	salario = 0;
}


double Consultor::getSalario(){
	return salario*1.1;
}

double Consultor::getSalario(float p){
    return salario*(1+p);
}


