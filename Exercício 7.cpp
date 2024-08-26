// Exercício 7:
// Implementar a sequência de Fibonacci Recursivamente e Iterativamente.
// O  usuário deve informar a posição desejada e o programa retornar o valor da sequência nessa determinada posição.
// 0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946…

#include <iostream>
using namespace std;

int fibonacciRecursivo(int N) {
    if (N < 0) {
        return -1;
    }
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    return fibonacciRecursivo(N - 1) + fibonacciRecursivo(N - 2);
}

int fibonacciIterativo(int N) {
    if (N < 0) {
        return -1;
    }
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    int a = 0, b = 1, fibonacci = 0;
    for (int i = 2; i <= N; i++) {
        fibonacci = a + b;
        a = b;
        b = fibonacci;
    }
    return fibonacci;
}

int main() {
    int N;
    cout << "Digite a posicao desejada na sequencia de Fibonacci: ";
    cin >> N;
    if (N < 0) {
        cout << "Erro: A posição deve ser um numero nao negativo." << endl;
    } else {
        int resultadoRecursivo = fibonacciRecursivo(N);
        cout << "Fibonacci recursivo na posicao " << N << " e: " << resultadoRecursivo << endl;
        int resultadoIterativo = fibonacciIterativo(N);
        cout << "Fibonacci iterativo na posicao " << N << " e: " << resultadoIterativo << endl;
    }
    return 0;
}
