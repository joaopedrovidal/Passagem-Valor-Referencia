// Exercício 6:
// Calcular o somatório de 1 à N Recursivamente e Iterativamente.
// Valores  menores ou iguais a zero representam situações de erro.


#include <iostream>
using namespace std;

int somatorioRecursivo(int N) {
    if (N <= 0) {
        return -1;
    }
    if (N == 1) {
        return 1;
    }
    return N + somatorioRecursivo(N - 1);
}

int somatorioIterativo(int N) {
    if (N <= 0) {
        return -1;
    }
    int soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int N;

    cout << "Digite o valor de N: ";
    cin >> N;
    if (N <= 0) {
        cout << "Erro: N deve ser maior que zero." << endl;
    } else {
        int resultadoRecursivo = somatorioRecursivo(N);
        cout << "Somatorio recursivo de 1 ate " << N << " e: " << resultadoRecursivo << endl;
        int resultadoIterativo = somatorioIterativo(N);
        cout << "Somatorio iterativo de 1 ate " << N << " e: " << resultadoIterativo << endl;
    }
    return 0;
}
