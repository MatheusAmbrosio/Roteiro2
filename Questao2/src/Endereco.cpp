#include "Endereco.h"

Endereco::Endereco()
{
    numero = 0;
    rua = "";
    bairro = "";
    cidade = "";
    estado = "";
    cep = "";
}

Endereco::Endereco(int n, string r, string b, string c, string e, string cepe){

    numero = n;
    rua = r;
    bairro = b;
    cidade = c;
    estado = e;
    cep = cepe;

}

string Endereco::toString(){
    return rua + ", " + numero + ", " + bairro + ", " + cidade + ", " + estado + ", " + cep;
}


