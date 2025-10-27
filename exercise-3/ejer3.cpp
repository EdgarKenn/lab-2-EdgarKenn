#include <iostream>
using namespace std;

int main() {
    int num;
    int divisor = 10000;
    int digito;

    cout << "Introduzca un número entero de cinco dígitos: ";
    cin >> num;

    if (num < 10000 || num > 99999) {
        cout << "El número ingresado no es de cinco dígitos." << endl;
    }

    cout << "Dígitos separados: ";

    for (int i = 0; i < 5; ++i) {

        digito = num / divisor;
        cout << digito << "   "; 
        num = num % divisor; 
        divisor = divisor / 10;
    }

    return 0;
}