#include <iostream>
using namespace std;

int main() {
int cod=0, codv=0, codn=0, velho = 0, novo = 0, idade = 0;

for (int i = 1; i <= 3; i++){

cout <<"\t\ndigite sua idade: ";

cin >> idade;
cout <<"\t\ndigite sue codigo ";

cin >> cod;

if(idade > velho){
velho=idade;
codv=cod;
}
if(idade < novo){
novo=idade;
codn=cod;
}
idade = 0;
}
 cout << "\n\tmais velho é " << velho;
 cout << "\n\to codigo do mais velho é " << codv;

cout << "\n\tmais novo é " << novo;
cout << "\n\to codigo do mais novo é " << codn;


}