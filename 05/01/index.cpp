#include<iostream> 
using namespace std;
int main(){
    int matriz[6][6], vetor[36], i, j ;

    for(i=0; i<6; i++ ){
        for(j=0; j<6 ;j++){
            cin >> matriz[j][i];
        }
    }
    for(i=0; i<6; i++ ){
        for(j=0; j<6 ;j++){
            cout << matriz[j][i];
        }
        cout << "\n";
    }
}