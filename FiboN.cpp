#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;
    cout << "Introduce la posición en la serie de Fibonacci: ";
    cin >> n;
    cout << "El número de Fibonacci en la posición " << n << " es: " << fib(n) << endl;
    return 0;
}
