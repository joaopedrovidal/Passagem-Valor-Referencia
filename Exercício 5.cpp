// Exercício 5: Realizar uma pesquisa em livro e/ou internet a respeito do algoritmo de Pesquisa Binária.
//
// Realizar manualmente três rastreios sobre o código fonte, pesquisando os valores
// 75, 22 e 90 no seguinte vetor:
// 0 18 22 25 40 51 66 75 87
//
// Em seguida, faça a implementação em C++docódigo fonte de Pesquisa Binária.

#include <iostream>
using namespace std;

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int left = 0;
    int right = tamanho - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (vetor[middle] == valor)
            return middle;
        if (vetor[middle] < valor)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valores[] = {75, 22, 90};
    for (int i = 0; i < 3; i++) {
        int resultado = pesquisaBinaria(vetor, tamanho, valores[i]);
        if (resultado != -1) {
            cout << "Valor " << valores[i] << " encontrado no indice " << resultado << endl;
        } else {
            cout << "Valor " << valores[i] << " nao encontrado." << endl;
        }
    }
    return 0;
}
