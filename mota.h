#ifndef MOTA_H
#define MOTA_H
#endif

#include "veiculo.h"

class Mota : public Veiculo{
    private:
    string tipoDeGuidao;
    public:
    void empinar();
    Mota(string nome, string rodas, string motor, int velocidadeMax, string tipoDeGuidao)
        : Veiculo(nome, rodas, motor, velocidadeMax), tipoDeGuidao(tipoDeGuidao) {}
};
