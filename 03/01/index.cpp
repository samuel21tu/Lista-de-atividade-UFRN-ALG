#include <iostream>
using namespace std;

int main() {
int cod=0, codv=0, codn=0, velho=-1 , novo=1000, idade;

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

}
 cout << "\n\tmais velho é " << velho;
 cout << "\n\to codigo do mais velho é " << codv;

cout << "\n\tmais novo é " << novo;
cout << "\n\to codigo do mais novo é " << codn;

return 0;
}