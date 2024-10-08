#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, I, RESUL;
    string linea;

    cout << "DIGITE NUMERO: ";
    getline(cin, linea);
    NUM = stoi(linea); // Convertir string a int

    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I = I + 1;
    }

    cout << "Pulse una tecla: ";
    getline(cin, linea); // Esperar a que el usuario presione una tecla
    return 0;
}