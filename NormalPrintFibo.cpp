#include <iostream>

using namespace std;

int main() {
    int n, t1 = 1, t2 = 1, nextTerm;

    cout << "Ingrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> n;

    cout << "Los primeros " << n << " terminos de la serie de Fibonacci son: ";

    for (int i = 0; i < n; ++i) {
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
