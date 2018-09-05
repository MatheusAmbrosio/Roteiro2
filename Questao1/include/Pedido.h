#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

using namespace std;

class Pedido
{
    public:

        Pedido();
        Pedido(int n, int q, string d, double p);
        int getNumero();
        int getQuantidade();
        string getDescricao();
        double getPreco();


    private:

        int numero;
        int quantidade;
        string descricao;
        double preco;

};

#endif // PEDIDO_H
