#include "Pessoa.h"

Pessoa::Pessoa(string n){
    nome = n;
}

Pessoa::Pessoa(string n, Endereco ender, string tel){
    nome = n;
    endereco = ender;
    telefone = tel;
}

void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::setEndereco(Endereco ender){
    endereco = ender;
}

void Pessoa::setTelefone(string tel){
    telefone = tel;
}

string Pessoa::getNome(){
    return nome;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

string Pessoa::getTelefone(){
    return telefone;
}
