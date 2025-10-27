#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int numero_Medio;

    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;
    cout << "Ingrese el tercer número: ";
    cin >> n3;

    if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
        numero_Medio = n1;
    } else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
        numero_Medio = n2;
    } else {
        numero_Medio = n3;
    }

    cout << "El número del medio es: " << numero_Medio << endl;
    return 0;
}