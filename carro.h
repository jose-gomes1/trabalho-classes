#ifndef CARRO_H
#define CARRO_H
#endif

#include "veiculo.h"

class Carro : public Veiculo {
    private:
    int numPortas;
    public:
    void abrirPortas();
    void fecharPortas();
    Carro(string nome, string rodas, string motor, int velocidadeMax, int numPortas) 
        : Veiculo(nome, rodas, motor, velocidadeMax), numPortas(numPortas) {}
};
