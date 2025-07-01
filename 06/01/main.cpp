#include <iostream>
#include <string>
using namespace std;
struct aluno {
    int matricula;
    float mediag;
    string nome, endereco;
};

int main(){
    aluno alunos[10];

    for(int i=1;i<=10;i++){
        cout << "-------------aluno" <<i << "----------------";
        cout << "\n\tmatricula: ";
        cin >> alunos[i].matricula;
        getchar();
        cout<< "\tnome: ";
        getline(cin, alunos[i].nome);
        cout << "\tendereço: ";
        getline(cin, alunos[i].endereco);
        cout << "\tmedia geral: ";
        cin >> alunos[i].mediag;
        if(alunos[i].mediag>5){
            alunos[i].mediag+=0,5;
        }
    }
    for (int i=1;i<=10;i++){
        cout << alunos[i].matricula <<"\n"<< alunos[i].nome <<"\n"<< alunos[i].endereco <<"\n"<< alunos[i].mediag;
    }

    return 0;
}
