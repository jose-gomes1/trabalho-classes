#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo{
    public:
    // Construtor que inicializa o nome do veículo
    Veiculo(string nome, string rodas, string motor, int velocidadeMax);
    string nome;
    string rodas;
    string motor;
    int velocidadeMax;
    int velocidadeAtual = 0;
    bool luzes = false;
    void mostrarDetalhes();
    void acelerar();
    void travar();
    void ligarLuzes();
    void desligarLuzes();

};

#endif