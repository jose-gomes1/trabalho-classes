#include "veiculo.h"

void Veiculo::mostrarDetalhes()
{
    cout << "Nome do veículo: " << nome << "\n";
    cout << "Motor: " << motor << "\n";
    cout << "Rodas: " << rodas << "\n";
    cout << "Velocidade Máxima: " << velocidadeMax << " km/h\n";
}

void Veiculo::acelerar()
{
    while(velocidadeAtual <= velocidadeMax){
        cout << "Aceleraste, agora estás a " << velocidadeAtual << " km/h\n";
        velocidadeAtual++;
    }
}

void Veiculo::travar()
{
    while(velocidadeAtual >= 0){
        cout << "Estás a travar, está a " << velocidadeAtual << " km/h\n";
        velocidadeAtual--;
    }
}

void Veiculo::ligarLuzes()
{
    if(!luzes){
        cout << "Ligaste as luzes\n";
        luzes = true;
    }else{
        cout << "Já tens as luzes ligadas\n";
    }
}

void Veiculo::desligarLuzes()
{
    if(luzes){
        cout << "Desligaste as luzes\n";
        luzes = false;
    }else{
        cout << "Precisas ligar as luzes para desligá-las novamente\n";
    }
}

Veiculo::Veiculo(string nome, string rodas, string motor, int velocidadeMax)
{
    this -> nome = nome;
    this -> rodas = rodas;
    this -> motor = motor;
    this -> velocidadeMax = velocidadeMax;
}
