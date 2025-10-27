#include <iostream>
using namespace std;

int main () {
    int list [3];
    float add;
    cout << "Ingrese el primer número: ";
    cin >> list [0];
    cout << endl << "Ingrese el segundo número: ";
    cin >> list [1];
    cout << endl << "Ingrese el tercer número: ";
    cin >> list [2];

    for (int i = 0; i < 3; i++) {
        add += list [i];
    }

    cout << "La suma es: " << add << endl;
    cout << "el promedio es: " << add / 3 << endl;
    cout << "El producto es: " << list [0] * list[1] * list[2] << endl;

    int smaller;
    int bigger;
    smaller = list[0];
    bigger = list[0];
    
    for (int i = 0; i < 3; i++) {

        if (smaller > list[i]) {
            smaller = list[i];
        }

        if (bigger < list[i]) {
            bigger = list[i];
        }
        
    }
    
    cout << "El menor es: " << smaller << endl;
    cout << "El mayor es: " << bigger << endl;

    return 0;
}