#include "mota.h"

void Mota::empinar()
{
    cout << "A tua mota esta a empinar\n"; //este método foi a única ideia que tive para a mota
}

void Mota::mostrarDetalhes()
{
    Veiculo::mostrarDetalhes();
    cout << "Tipo de guidao:" << tipoDeGuidao << "\n";
}

void Mota::menuMota()
{
    int opcao;
    do {
        cout << "\nMenu da Mota:\n";
        cout << "1. Mostrar detalhes\n";
        cout << "2. Empinar\n";
        cout << "3. Acelerar\n";
        cout << "4. Travar\n";
        cout << "5. Ligar Luzes\n";
        cout << "6. Desligar Luzes\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarDetalhes();
                break;
            case 2:
                empinar();
                break;
            case 3:
                acelerar();
                break;
            case 4:
                travar();
                break;
            case 5:
                ligarLuzes();
                break;
            case 6:
                desligarLuzes();
                break;
            case 0:
                cout << "Saindo do menu da \n";
                break;
            default:
                cout << "Opção invalida! Tente novamente.\n";
                break;
        }
    } while (opcao != 0);
}
