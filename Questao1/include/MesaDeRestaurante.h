#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"


class MesaDeRestaurante
{
    public:

        MesaDeRestaurante();
        void adicionaAoPedido(Pedido ped);
        void zeraPedidos();
        double calculaTotal();

    private:

        Pedido pedidos[100];
        int j;

};

#endif // MESADERESTAURANTE_H
