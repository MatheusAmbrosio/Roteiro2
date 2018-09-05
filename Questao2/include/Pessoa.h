#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"



class Pessoa
{
    public:

        Pessoa(string n);
        Pessoa(string n, Endereco ender, string tel);
        void setNome(string n);
        void setEndereco(Endereco ender);
        void setTelefone(string tel);
        string getNome();
        Endereco getEndereco();
        string getTelefone();

    private:

        string nome;
        string telefone;
        Endereco endereco;

};

#endif // PESSOA_H
