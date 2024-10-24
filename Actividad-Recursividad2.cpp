#include <iostream>

using namespace std;

void escribeNumeros(int ini, int fin) {
    if (ini <= fin) {
        cout << ini << " ";
        escribeNumeros(ini + 1, fin);
    }
}

int main() {
    int inicio, final;

    cout << "Ingrese el número inicial: ";
    cin >> inicio;
    cout << "Ingrese el número final: ";
    cin >> final;

    cout << "Los números del " << inicio << " al " << final << " son: ";
    escribeNumeros(inicio, final);
    cout << endl;

    return 0;
}