#include <iostream>

using namespace std;

// Función recursiva para calcular x elevado a la y
int potencia(int x, int y) {
    if (y == 0) {
        return 1; // Cualquier número elevado a 0 es 1
    } else {
        return x * potencia(x, y - 1);
    }
}

int main() {
    int base, exponente, resultado;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    resultado = potencia(base, exponente);

    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}