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

    for(int i=1;i<=2;i++){
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
    for (int i=1;i<=2;i++){
        cout <<"matricula: " << alunos[i].matricula <<"\n"<< "nome do aluno: "<< alunos[i].nome <<"\n"<< "ENDEREÇO: " << alunos[i].endereco <<"\n"<<"media geral do aluno: " << alunos[i].mediag << "\n";
    }

    return 0;
}
