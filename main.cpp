#include "all.h"

int main() {
    Carro Carro1("Toyota Corolla", "1.8L", "Pneus Radiais", 180, 4);
    cout << "Detalhes do Carro:\n";
    Carro1.mostrarDetalhes();

    Mota Mota1("Honda CB500", "500cc", "Pneus Desportivos", 200, "Guiadão Desportivo");
    cout << "Detalhes da Mota:\n";
    Mota1.mostrarDetalhes();
    return 0;
}
