#include<iostream>
using namespace std;

int main(){
    float valorcompra, resultado;
    int parcela;
    
    cout << "valor da compra R$:";
    cin >> valorcompra;
    cout << "\nquantidade de parcela(de 1-10):";
    cin >> parcela; 
    if(parcela < 1 || parcela > 10){
        cout << "\nnumero de parcela só pode estar entre 0 e 11\n\n";
    }
    else{
    resultado = (valorcompra / parcela);
    cout << "R$:" << resultado << " por parcela\n";
}
}
