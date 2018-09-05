#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

using namespace std;

class Trabalhador
{
    public:

        Trabalhador();
        void setNome(string n);
        void setSalario(float s);
        string getNome();
        float getSalario();
        float calcularPagamentoSemanal(int horas);

    protected:

        string nome;
        float salario;

};

#endif // TRABALHADOR_H
