#include<iostream>
using namespace std;

int main(){
    float anos, cigarros, preço, resultado;

    cout <<"Calculador de Gastos com Cigarro";
    cout << "a quantos anos você fuma?\n";
    cin >> anos;
    cout << "quantos cigarros você fuma por dias?\n";
    cin >> cigarros;
    cout << "qual o preço da carteira de 10 cigarros?\n";
    cin >> preço; 

    resultado = ((((cigarros*365)/10)*preço)*anos);

    cout << "R$:" << resultado << "\n";
    system("pause");
}