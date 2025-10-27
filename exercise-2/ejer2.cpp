#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es un número PAR." << endl;
    } else {
        cout << num << " es un número IMPAR." << endl;
    }

    return 0;
}