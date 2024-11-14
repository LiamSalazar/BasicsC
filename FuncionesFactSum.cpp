#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num1, num2, numero;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma(num1, num2) << endl;

    cout << "Introduce un número para calcular su factorial: ";
    cin >> numero;
    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;

    return 0;
}
