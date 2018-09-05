#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{

    TrabalhadorAssalariado matheus = TrabalhadorAssalariado();
    TrabalhadorPorHora laura = TrabalhadorPorHora(15);

    matheus.setNome("Matheus");
    matheus.setSalario(2000);
    laura.setNome("Laura");
    laura.setSalario(2500);

    cout << "O pagamento semanal de Matheus eh R$" << matheus.calcularPagamentoSemanal() << endl;
    cout << "O pagamento semanal de Laura eh R$" << laura.calcularPagamentoSemanal(45) << endl;


    return 0;
}
