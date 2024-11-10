#include "carro.h"

void Carro::abrirPortas()
{
    string a;
    cout << "Quantas portas deseja abrir?\n";
    cin.ignore();
    getline(cin, a);
    int portas = stoi(a);
    if(portas + portasAbertas <= numPortas){
        portasAbertas += portas;
        cout << "Abriste " << portas << " portas\n";
        cout << "Total de portas abertas: " << portasAbertas << endl;
    }else{
        cout << "O teu carro nao tem " << portas << " portas para abrir\n";
        cout << "Tem " << numPortas << " portas\nE" << portasAbertas << " portas abertas\n";
    }
}

void Carro::fecharPortas()
{
    string a;
    cout << "Quantas portas deseja fechar?\n";
    cin.ignore();
    getline(cin, a);
    int portas = stoi(a);
    if (portas <= portasAbertas) {
        portasAbertas -= portas;
        cout << "Fechaste " << portas << " portas\n";
        cout << "Total de portas abertas: " << portasAbertas << endl;
    }else{
        cout << "O teu carro nao tem " << portas << " portas para fechar\n";
        cout << "Tem " << portasAbertas << " portas abertas\n";
    }
}

void Carro::mostrarDetalhes()
{
    Veiculo::mostrarDetalhes();
    cout << "Numero de portas: " << numPortas << "\n";
}

void Carro::menuCarro()
{
    int opcao;
    do {
        cout << "\nMenu do Carro:\n";
        cout << "1. Mostrar detalhes\n";
        cout << "2. Abrir portas\n";
        cout << "3. Fechar portas\n";
        cout << "4. Acelerar\n";
        cout << "5. Travar\n";
        cout << "6. Ligar Luzes\n";
        cout << "7. Desligar Luzes\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarDetalhes();
                break;
            case 2:
                abrirPortas();
                break;
            case 3:
                fecharPortas();
                break;
            case 4:
                acelerar();
                break;
            case 5:
                travar();
                break;
            case 6:
                ligarLuzes();
                break;
            case 7:
                desligarLuzes();
                break;
            case 0:
                cout << "Saindo do menu do carro\n";
                break;
            default:
                cout << "Opção invalida! Tente novamente.\n";
                break;
        }
    } while (opcao != 0);
}
