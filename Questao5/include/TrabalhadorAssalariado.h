#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"


class TrabalhadorAssalariado: public Trabalhador{
    public:

        TrabalhadorAssalariado();
        float calcularPagamentoSemanal();

    protected:



};

#endif // TRABALHADORASSALARIADO_H
