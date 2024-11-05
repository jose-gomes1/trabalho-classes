#include "carro.h"

void Carro::abrirPortas()
{
    string a;
    cout << "Quantas portas deseja abrir?\n";
    cin.ignore();
    getline(cin, a);
    int portas = stoi(a);
    if(portas <= numPortas){
        cout << "Abriste " << portas << " portas\n";
    }else{
        cout << "O teu carro não tem " << portas << " portas";
        cout << "Tem " << numPortas << " portas\n";
    }
}

void Carro::fecharPortas()
{
    string a;
    cout << "Quantas portas deseja fechar?\n";
    cin.ignore();
    getline(cin, a);
    int portas = stoi(a);
    if(portas <= numPortas){
        cout << "Fechaste " << portas << " portas\n";
    }else{
        cout << "O teu carro não tem " << portas << " portas";
        cout << "Tem " << numPortas << " portas\n";
    }
}