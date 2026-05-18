#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombres[] = {"Juan", "Ana", "Luis"};
    int notas[] = {9, 10, 8};

    string buscar;

    cout << "Ingrese nombre: ";
    cin >> buscar;

    // ERROR ORIGINAL: for (int i = 0; i <= 3; i++)
    // Al usar '<= 3', el bucle se ejecuta para i = 0, 1, 2 y 3.
    // Los arreglos solo tienen 3 elementos (índices 0, 1 y 2). El índice 3 no existe.
    // SOLUCIÓN: Cambiar la condición a 'i < 3' (o 'i <= 2') para no salir de los límites del arreglo.
    for (int i = 0; i < 3; i++) {

        if (nombres[i] == buscar) {
            cout << "Nota: " << notas[i];
            break;
        }
    }

    return 0;
}
