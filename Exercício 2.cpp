
// Exercício 2:
// Faça uma função que receba um parâmetro com o total de minutos passados ao longo do dia
// e também dois parâmetros que devem ser preenchidos com o  valor da hora e do minuto corrente.
// Faça um programa que:
// leia do teclado quantos  minutos se passaram desde meia-noite e imprima no formato de horas e minutos.


#include "iostream"
#include "ctime"
#include "iomanip"
using namespace std;

void converteTempo(int totalMinutos, int &horaAtual, int &minutoAtual){
    horaAtual = totalMinutos / 60;
    minutoAtual = totalMinutos % 60;
}

int main(){
    int totalMinutos = 0, horaAtual = 0, minutoAtual = 0;

    cout << "Digite o total de minutos que se passaram desde meia-noite: " << endl;
    cin >> totalMinutos;

    converteTempo(totalMinutos, horaAtual, minutoAtual);
    cout << setw(2) << setfill('0') << horaAtual  << ":" << setw(2) << setfill('0') <<  minutoAtual << " Horas" <<endl;
    return 0;
}
