#include "Pedido.h"

Pedido::Pedido(){
    int numero = 0;
    int quantidade = 0;
    std::string descricao = "";
    double preco = 0.0;
}

Pedido::Pedido(int n, int q, std::string d, double p){
    numero = n;
    quantidade = q;
    descricao = d;
    preco = p;
}

int Pedido::getNumero(){
    return numero;
}

int Pedido::getQuantidade(){
    return quantidade;
}

std::string Pedido::getDescricao(){
    return descricao;
}

double Pedido::getPreco(){
    return preco;
}



