#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:

        Endereco();
        Endereco(int n, string r, string b, string c, string e, string cepe);
        string toString();

    private:

        int numero;
        string rua;
        string bairro;
        string cidade;
        string estado;
        string cep;

};

#endif // ENDERECO_H
