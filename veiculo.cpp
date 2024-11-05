#include "veiculo.h"

Veiculo::Veiculo(string nome, string rodas, string motor, int velocidadeMax)
{
    this -> nome = nome;
    this -> rodas = rodas;
    this -> motor = motor;
    this -> velocidadeMax = velocidadeMax;
}

void Veiculo::mostrarDetalhes()
{
    cout << "Nome do veiculo: " << nome << "\n";
    cout << "Motor: " << motor << "\n";
    cout << "Rodas: " << rodas << "\n";
    cout << "Velocidade Maxima: " << velocidadeMax << " km/h\n";
}

void Veiculo::acelerar()
{
    while(velocidadeAtual <= velocidadeMax){
        cout << "Aceleraste, agora estas a " << velocidadeAtual << " km/h\n";
        velocidadeAtual++;
    }
}

void Veiculo::travar()
{
    while(velocidadeAtual >= 0){
        cout << "Estás a travar, estas a " << velocidadeAtual << " km/h\n";
        velocidadeAtual--;
    }
}

void Veiculo::ligarLuzes()
{
    if(!luzes){
        cout << "Ligaste as luzes\n";
        luzes = true;
    }else{
        cout << "Ja tens as luzes ligadas\n";
    }
}

void Veiculo::desligarLuzes()
{
    if(luzes){
        cout << "Desligaste as luzes\n";
        luzes = false;
    }else{
        cout << "Precisas ligar as luzes para desliga-las novamente\n";
    }
}

