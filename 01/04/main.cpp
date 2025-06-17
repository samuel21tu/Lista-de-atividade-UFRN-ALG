#include<iostream> 
using namespace std;
int main(){
    int numero;
    float porcentagem, resultado;
    cout << "número: ";
    cin >> numero;
    cout << "porcentagem:";
    cin >> porcentagem;


    resultado = ((porcentagem / numero)*100);

    cout << resultado << "%";
}