#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    nome = "";
    salario = 0;
}

void Trabalhador::setNome(std::string n){
    nome = n;
}

void Trabalhador::setSalario(float s){
    salario = s;
}

std::string Trabalhador::getNome(){
    return nome;
}

float Trabalhador::getSalario(){
    return salario;
}

float Trabalhador::calcularPagamentoSemanal(int h){

}
