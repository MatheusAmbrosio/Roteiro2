#include "Quadrado.h"

Quadrado::Quadrado(){
    lado = 0;
    nome = "";
}

double Quadrado::calcularArea(){
	 return getLado()*getLado();
}


double Quadrado::getLado(){
    return lado;
}


void Quadrado::setLado(double l){
	lado = l;
}

