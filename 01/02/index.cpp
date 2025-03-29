#include<iostream>
using namespace std;

int main(){
    float anos, cigarros, preço, resultado;

    cout << "a quantos anos você fuma?";
    cin >> anos;
    cout << "quantos cigarros você fuma por dias?";
    cin >> cigarros;
    cout << "qual o preço da carteira de 10 cigarros?";
    cin >> preço; 

    resultado = ((((cigarros*365)/10)*preço)*anos);

    cout << resultado;
    system("pause");
}