#include <iostream>
using namespace std;

int main() {
    int c, d, u;
    int num_Final;

    // 1. Solicitar y leer los tres dígitos
    cout << "Introduzca el primer dígito (centenas): ";
    cin >> c;
    cout << "Introduzca el segundo dígito (decenas): ";
    cin >> d;
    cout << "Introduzca el tercer dígito (unidades): ";
    cin >> u;

    num_Final = (c * 100) + (d * 10) + u;

    cout << "Los dígitos combinados forman el número: " << num_Final << endl;

    return 0;
}