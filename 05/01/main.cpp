#include<iostream> 
using namespace std;
int main(){
    int matriz[6][6], vetor[36], i, j, a, ;

    for(i=0; i<6; i++ ){
        for(j=0; j<6 ;j++){
            cin >> matriz[j][i];
        }
    }
    cout << "digite um número pra multiplicar o vetor";
    cin >> a;

    for(i=0; i<6; i++ ){
        for(j=0; j<6 ;j++){
            vetor[j]= matriz[j][i]*a;
        }
    }
    for(i=0; i<6; i++ ){
        cout << vetor[i];
    }
}