// Exercício 4:
// Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N (M<=20, N<=25), onde M e N são lidos. Calcule e escreva: 
//
// - A matriz transposta 
//
// - A multiplicação da matriz por um fator K informado pelo usuário; 
//
// - A adição com uma segunda matriz informada pelo usuário; 
// 
// As matrizes informadas pelo usuário não devem ser alteradas. 
// 
// O programa deve utilizar pelo menos uma função para ler os valores a serem  armazenados nas matrizes,
// uma função para calcular a matriz transposta, uma função  para calcular a multiplicação por K e uma função para fazer a adição das matrizes. 


#include <iostream>
using namespace std;

void lerMatriz(int** matriz, int M, int N) {
    cout << "Digite os elementos da matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
}

void calcularTransposta(int** matriz, int** transposta, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarPorFator(int** matriz, int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] *= K;
        }
    }
}

void adicionarMatrizes(int** matriz1, int** matriz2, int** resultado, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(int** matriz, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M, N, K;

    cout << "Digite o numero de linhas (M <= 20): ";
    cin >> M;
    cout << "Digite o numero de colunas (N <= 25): ";
    cin >> N;

    int** matriz1 = new int*[M];
    int** matriz2 = new int*[M];
    int** transposta = new int*[N];
    int** resultado = new int*[M];

    for (int i = 0; i < M; i++) {
        matriz1[i] = new int[N];
        matriz2[i] = new int[N];
        resultado[i] = new int[N];
    }

    for (int i = 0; i < N; i++) {
        transposta[i] = new int[M];
    }

    lerMatriz(matriz1, M, N);

    calcularTransposta(matriz1, transposta, M, N);
    cout << "Matriz Transposta:" << endl;
    imprimirMatriz(transposta, N, M);

    cout << "Digite o fator K para multiplicacao: ";
    cin >> K;
    multiplicarPorFator(matriz1, M, N, K);
    cout << "Matriz apos multiplicacao por " << K << ":" << endl;
    imprimirMatriz(matriz1, M, N);

    cout << "Digite os elementos da segunda matriz para adicao: " << endl;
    lerMatriz(matriz2, M, N);

    adicionarMatrizes(matriz1, matriz2, resultado, M, N);
    cout << "Resultado da soma das matrizes: " << endl;
    imprimirMatriz(resultado, M, N);

    for (int i = 0; i < M; i++) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] resultado[i];
    }

    for (int i = 0; i < N; i++) {
        delete[] transposta[i];
    }

    delete[] matriz1;
    delete[] matriz2;
    delete[] transposta;
    delete[] resultado;

    return 0;
}
