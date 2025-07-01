#include<iostream>
#include <string>
using namespace std;
struct animais{
    string nome, raca;
    int idade;
};
int main(){
    animais animal[8];
    int a = 0, q = 0, i = 0;
    int o = 0;
    bool r=false;

    do{
        cout << "\t1-cadastrar animal";
        cout << "\n\t2-consultar animal";
        cout << "\n\t3-sair";
        cout << "\nEscolha uma opção: ";
        cin >> a;
        cin.ignore(); // Clear newline from input buffer

        switch(a){
            case 1:
                cout <<"quantos animais? ";
                cin >> q;
                cin.ignore(); // Clear newline from input buffer
                for (int i=0; i<q; i++){
                    cout << "nome do animal: ";
                    getline(cin, animal[i].nome);
                    cout << "raça do animal: ";
                    getline(cin, animal[i].raca);
                    do{
                        r=false;
                        cout << "idade do animal: ";
                        cin >> animal[i].idade;
                        if (animal[i].idade<=0){
                            cout << "digite um numero valido";
                            r = true;
                        }
                    }while(r=true);
                    cin.ignore(); // Clear newline from input buffer
                }
                break;
            case 2:
                for (int i=0; i<q; i++){
                    cout << "animal: " << animal[i].nome << "\nraça: " << animal[i].raca << " idade: " << animal[i].idade << endl;
                }
                break;
            case 3:
                cout << "Saindo..." << endl;
                o=3;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    }while(o!=3);
}
