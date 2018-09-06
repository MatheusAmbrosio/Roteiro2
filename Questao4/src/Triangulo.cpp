#include "Triangulo.h"

Triangulo::Triangulo(){
    base = 0;
    altura = 0;
    nome = "";
}

double Triangulo::calcularArea(){
	return getBase()*getAltura()/2;
}

double Triangulo::getAltura(){
	return altura;
}

double Triangulo::getBase(){
	return base;
}

void Triangulo::setBase(double b){
	base = b;
}

void Triangulo::setAltura(double h){
	altura = h;
}
