#include "Circulo.h"

Circulo::Circulo(){
    raio = 0;
    nome = "";
}

double Circulo::calcularArea(){
	 return 3.14159*getRaio()*getRaio();
}

double Circulo::getRaio(){
	return raio;
}

void Circulo::setRaio(double r){
    raio = r;
}

