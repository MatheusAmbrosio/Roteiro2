#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(float vh){
    valorDaHora = vh;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int h){


    if (h > 40){
        return (40 + (h-40)*1.5) * valorDaHora;
    }

    return valorDaHora * h;
}
