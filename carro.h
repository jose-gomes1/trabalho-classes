#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

class Carro : public Veiculo {
    private:
    int numPortas;
    int portasAbertas = 0;
    public:
    Carro(string nome, string rodas, string motor, int velocidadeMax, int numPortas) 
        : Veiculo(nome, rodas, motor, velocidadeMax), numPortas(numPortas) {}
    void abrirPortas();
    void fecharPortas();
    void mostrarDetalhes() override;
    void menuCarro();
};

#endif