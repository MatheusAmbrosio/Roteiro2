#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include "Pedido.h"

RestauranteCaseiro::RestauranteCaseiro(){
    k = 0;
}

void RestauranteCaseiro::adicionaAoPedido(MesaDeRestaurante mesa, Pedido ped){

    mesa.adicionaAoPedido(ped);

}

double RestauranteCaseiro::calculaTotalRestaurante(){

    double total = 0;

    for (int i = 0; i  < 100; i++){
        total+= mesas[i].calculaTotal();
    }

    return total;
}
