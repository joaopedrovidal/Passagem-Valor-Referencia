// Exercício 1: Faça uma função que:
// recebe a idade de uma pessoa em dias e retorna essa idade expressa em anos, meses e dias. Ok


#include <iostream>
using namespace std;


void calculaIdade(int idade, int &anos, int &meses, int &dias){
    anos = idade /365;
    idade -= anos * 365;
    meses = idade / 30;
    idade -= meses * 30;
    dias = idade;
}

int main (){

    int idade2 = 0, anos = 0, meses = 0, dias = 0;
    cout << "Digite a sua idade em dias: " << endl;
    cin >> idade2;

    calculaIdade (idade2, anos, meses, dias);
    cout << "Sua idade e: " << anos << " anos " << meses << " meses " << dias << " dias " << endl;

    return  0;
}

