#include "MesaDeRestaurante.h"
#include "Pedido.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    j = 0;
}


double MesaDeRestaurante::calculaTotal(){

    double valor = 0;

    for(int i = 0; i < j; i++){
        valor+=(pedidos[i].getPreco() * pedidos[i].getQuantidade());
    }

    return valor;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido ped){
    pedidos[j]=ped;
    j++;
}

void MesaDeRestaurante::zeraPedidos(){
    j = 0;
}
