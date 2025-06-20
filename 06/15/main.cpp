#include<iostream>
#include<string> 
using namespace std;

int main(){
    int opcao,opc,reg, j=0, i=0, key[100];

    do{
    cout<<"Menu Principal";
    cout<<"\n----------------------";
    cout<<"\t\n1 – INCLUIR UM REGISTRO";
    cout<<"\t\n2 – BUSCAR UM REGISTRO";
    cout<<"\t\n3 – ALTERAR UM REGISTRO";
    cout<<"\t\n4 – EXCLUIR UM REGISTRO";
    cout<<"\t\n5 – LISTAR REGISTROS EXISTENTES";
    cout<<"\t\n6 – SAIR DO SISTEMA\n";
    cin>>opcao;
    switch(opcao){
        case 1: {
        char op;
        do{
            if(i==100){cout<< "o numero de keys chegou ao limite";break;}
            cout << "key: ";
            cin >> key[i];
            cout<<"registrar mais um? s-sim, n-não ";
            cin >> op;
            i++;
        }while(!(op=='n'));
        break;
        }
        case 2: {
        cout << "digite o n° do registro: ";
        cin >> reg;
        do{
            if(reg==key[j]){
            cout << "o registro " << reg << " existe.\n\n";
            }
            j++;
        }while(!(i==j));
        break; 
        }
        case 3: {
        cout <<"Qual regitro você quer alterar?(use a ordem de cadastro) ";
        cin >> opc;
        cin >> key[opc];
        break;
        }
        case 4: {
        cout <<"Qual regitro você quer excluir?(use a ordem de cadastro) ";
        cin >> opc;
        key[opc] =0;
        break;
        }
        case 5:{
            for(int z = 0; z < i; z++){
                if (key[z] != 0) { // só mostra se não foi excluído
                     cout << "key " << z << ": " << key[z] << "\n";
                }   
            }
            break;
        }
        case 6:
        opcao=-1;
        break;
    }
    }while(opcao!=-1);
}