#include<iostream>
 using namespace std;

 int main(){
    int anos, meses, dias, resultado;

    cout << "Calculadora de idade em dias\n";
    cout << "digite quantos anos você tem:\n";
    cin >> anos;
    cout << "digite quantos meses você viveu:\n";
    cin >> meses;
    cout << "digite quantos dias você viveu:\n";
    cin >> dias;

    resultado = (anos*365)+(meses*12)+dias;
    cout << "você viveu " << resultado << " dias";
    system("pause");
 }