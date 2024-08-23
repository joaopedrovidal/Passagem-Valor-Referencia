// Exercício 4:
// Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N (M<=20, N<=25),
// onde M e N são lidos. Calcule e escreva:
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
// uma função para calcular a matriz transposta,
// uma função  para calcular a multiplicação por K e uma função para fazer a adição das matrizes.

#include <iostream>
using namespace std;

int fatorK(){
    int k = 0;
    cout << "Digite o fator k" << endl;
    cin >> k;
    return k;
}

void multiplicaMatriz () {

}

void matriz(int matriz [20][25], int &m, int &n) {

}

int main(){
    int matriz [20][25], m, n;

    cout << "Digite o tamanho de linhas" << endl;
    cin >> m ;
    cout << "Digite o tamanho de colunas" << endl;
    cin >> n;
  while(m > 20 &&  n > 25){
      cout << "O tamanho de linhas deve ser menor ou igual a 20" << endl;
      cout << "E o tamanho de colunas deve ser menor ou igual a 25" << endl;
      cin >> m >> n;
  }
  return 0;

}