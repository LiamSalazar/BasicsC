#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;  
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int posicion;
    cout << "Introduce la posición en la serie de Fibonacci: ";
    cin >> posicion;

    int resultado = fibonacci(posicion);
    cout << "El número en la posición " << posicion << " de la serie de Fibonacci es: " << resultado << endl;

    return 0;
}

