#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main(){

    Endereco end1 = Endereco(64, "Rua Gervasio Bonavides", "Jaguaribe", "Joao Pessoa", "Paraiba", "58015-070");
    Endereco end2 = Endereco(142, "Rua Antonio Targino Pessoa da Silveira", "Bancarios", "Joao Pessoa", "Paraiba","58052-250");

    Pessoa p1 = Pessoa("Laura", end1, "83988001513");
    Pessoa p2 = Pessoa ("Matheus", end2, "83999299242");

    cout << "Nome: " << p1.getNome() << "Endereco: " << end1.toString() << "Telefone: " << p1.getNome() << endl;
    return 0;
}
