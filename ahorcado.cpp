#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string elegirPalabra() {
    vector<string> palabras = {"python", "programacion", "ahorcado", "juego", "computadora"};
    srand(time(0));
    return palabras[rand() % palabras.size()];
}

void jugar() {
    string palabra = elegirPalabra();
    vector<char> letrasAdivinadas;
    int intentosRestantes = 6;

    cout << "Bienvenido al juego del ahorcado!" << endl;

    while (intentosRestantes > 0) {
        cout << "\nPalabra: ";
        for (char letra : palabra) {
            if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
                cout << letra << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << "\nLetras adivinadas: ";
        for (char letra : letrasAdivinadas) {
            cout << letra << " ";
        }
        cout << "\nIntentos restantes: " << intentosRestantes << endl;

        char letra;
        cout << "Adivina una letra: ";
        cin >> letra;
        letra = tolower(letra);

        if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
            cout << "Ya adivinaste esa letra." << endl;
        } else {
            letrasAdivinadas.push_back(letra);
            if (palabra.find(letra) != string::npos) {
                cout << "¡Correcto!" << endl;
            } else {
                intentosRestantes--;
                cout << "Incorrecto." << endl;
            }
        }

        bool adivinada = true;
        for (char letraPalabra : palabra) {
            if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letraPalabra) == letrasAdivinadas.end()) {
                adivinada = false;
                break;
            }
        }
        if (adivinada) {
            cout << "¡Felicidades! Has adivinado la palabra: " << palabra << endl;
            return;
        }
    }
    cout << "¡Has perdido! La palabra era: " << palabra << endl;
}

int main() {
    jugar();
    return 0;
}
