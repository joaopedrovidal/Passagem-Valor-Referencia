// Exercício 3:
// Faça uma função que receba por parâmetro
// o tempo de duração expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e  segundos.

#include <iostream>
using namespace std;

void tempoSegundos(int &segundos, int &minutos, int &horas){
    horas  = segundos / 3600;
    segundos -= horas * 60;
    minutos = segundos / 60;
    segundos -= minutos * 60;
}


int main (){
    int segundos = 0, minutos = 0, horas = 0;
    cout << "Digite o tempo em segundos: " << endl;
    cin >> segundos;
    tempoSegundos(segundos, minutos, horas);
    cout << "O horario atual e: " << horas << " horas " << minutos << " minutos e " << segundos << " segundos " << endl;
    return 0;
}
