#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "Pedido.h"
#include "MesaDeRestaurante.h"



class RestauranteCaseiro
{
    public:

        RestauranteCaseiro();
        void adicionaAoPedido(MesaDeRestaurante mesa, Pedido ped);
        double calculaTotalRestaurante();


    private:

        MesaDeRestaurante mesas[100];
        int k;

};

#endif // RESTAURANTECASEIRO_H
