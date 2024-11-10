#include "all.h"

int main() {
    Carro Carro1("Toyota Corolla", "Pneus Radiais", "1.8L", 180, 4);
    Mota Mota1("Honda CB500", "Pneus Desportivos", "500cc", 200, "Guiadao Desportivo");

    int opcao;
    do {
        cout << "\nMenu Principal:\n";
        cout << "1. Acessar Carro\n";
        cout << "2. Acessar Mota\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                Carro1.menuCarro();
                break;
            case 2:
                Mota1.menuMota();
                break;
            case 0:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opção invalida! Tente novamente.\n";
                break;
        }
    } while (opcao != 0);

    return 0;
}
