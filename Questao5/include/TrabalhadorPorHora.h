#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora: public Trabalhador{
    public:

        TrabalhadorPorHora(float vh);
        float calcularPagamentoSemanal(int horas);

    protected:

        float valorDaHora;

};

#endif // TRABALHADORPORHORA_H
