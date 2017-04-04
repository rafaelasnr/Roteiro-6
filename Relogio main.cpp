#include "Relogio.h"
#include <iostream>

using namespace std;

int main(){
    Relogio rel1;
    int x, y, z;

    cout << "Digite a hora: " << endl;
    cin >> x;
    cout << "Digite o minuto: " << endl;
    cin >> y;
    cout << "Digite o segundo: " << endl;
    cin >> z;

    rel1.setHorario(int x, int y, int z);

    Relogio Teste;
    Teste.setHorario (x, y, z);

    cout << "Relogio: " << Teste.hora << "." << Teste.minuto << "." << Teste.segundo << endl;



return 0;}
