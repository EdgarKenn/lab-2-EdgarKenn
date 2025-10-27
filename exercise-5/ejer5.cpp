#include <iostream>
using namespace std;

int main() {

    int valores[] = {0, 1, 2, 3, 4, 5};
    int num_V = 6;

    cout << "***********" << endl;
    cout << "x  f(x)" << endl;
    cout << "***********" << endl;

    for (int i = 0; i < num_V; ++i) {
        int x = valores[i];

        int fx = (x * x * x) - (x * x) + 5; 

        cout << x << "  " << fx << endl;
    }

    cout << "***********" << endl;

    return 0;
}