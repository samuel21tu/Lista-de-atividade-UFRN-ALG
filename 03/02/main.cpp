#include <iostream>

using namespace std;

int main(){
float juca = 1.10, chico = 1.50;

int anos = 0;

while (chico > juca){

chico += 0.02;

juca += 0.03;

anos += 1;

}

cout << "faltam " << anos << " anos para Juca ser maior que Chico";
}