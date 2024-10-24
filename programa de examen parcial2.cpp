#include <iostream>
#include <string>

using namespace std;

// Estructura para representar una persona
struct Persona {
    string nombre;
    string apellido;
    int edad;
};

// Función para agregar una persona al arreglo
void agregarPersona(Persona personas[], int &indice) {
    cout << "PERSONA " << indice + 1 << endl;
    cout << "Nombre: ";
    cin >> personas[indice].nombre;
    cout << "Apellido: ";
    cin >> personas[indice].apellido;
    cout << "Edad: ";
    cin >> personas[indice].edad;
    indice++;
}

// Función para imprimir los datos de todas las personas
void imprimirPersonas(const Persona personas[], int numPersonas) {
    for (int i = 0; i < numPersonas; ++i) {
        cout << "PERSONA " << i + 1 << endl;
        cout << "La persona con nombre " << personas[i].nombre << " "
             << personas[i].apellido << " de " << personas[i].edad
             << " años está presente." << endl;
    }
}

// Función para contar las personas mayores de 18 años
int contarMayores18(const Persona personas[], int numPersonas) {
    int contador = 0;
    for (int i = 0; i < numPersonas; ++i) {
        if (personas[i].edad > 18) {
            contador++;
        }
    }
    return contador;
}

int main() {
    const int MAX_PERSONAS = 3;
    Persona personas[MAX_PERSONAS];
    int indice = 0;

    // Agregar personas
    for (int i = 0; i < MAX_PERSONAS; ++i) {
        agregarPersona(personas, indice);
    }

    // Imprimir personas
    imprimirPersonas(personas, MAX_PERSONAS);

    // Contar personas mayores de 18
    int mayores18 = contarMayores18(personas, MAX_PERSONAS);
    cout << "\nSE HAN CONTADO " << mayores18 << " PERSONAS CON MAS DE 18 AÑOS" << endl;

    return 0;
}