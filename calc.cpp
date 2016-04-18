#include <iostream>
using namespace std;

int main(){
    char operador;
    int n1,n2,cont=0,i;
    cout<<"Informe o operador: ";
    cin>>operador;
    //SOMA
    if(operador == '+'){
        cin>>n1>>n2;
        cout<<n1+n2<<endl;
    }
    //SUBTRAÇÃO
    if(operador  == '-'){
        cin>>n1>>n2;
        if(n1>n2){
            while(n1 != n2){
                n2++;
                cont++;
            }
        }
        if(n2>n1){
            while(n1 != n2){
                n2--;
                cont--;
           }
        }
       cout<<cont<<endl;
    }
    //MULTIPLICAÇÃO
    if(operador == '*'){
        cin>>n1>>n2;
        for(i=0; i<n2; i++){
            cont+=n1;
        }
        cout<<cont<<endl;
    }
    //DIVISÃO
    if(operador == '/'){
        cin>>n1>>n2;
        i = n2;
        while(n2<=n1){
            n2+=i;
            cont++;
        }
        cout<<cont<<endl;
    }
    //RAIZ QUADRADA
    if(operador == '@'){
        cin>>n1;
        n2=1;
        if(n1>0){
            while(true){
                for (i=1; i<=n2; i++){
                    cont+=n2;
                }
                    if(cont == n1){
                        cout<<n2<<endl;
                        break;
                    }
                    if(cont<n1){
                        cont = 0;
                        n2++;
                    }
                    else{cout<<"Nao ha raiz exata"<<endl; break;}
                }
        }
        else{cout<<"Nao ha raiz exata"<<endl;}
    }
    else{
        cout<<"Operador Invalido"<<endl;
        cout<<endl;
        cout<<"//////HELP//////"<<endl;
        cout<<"SOMA: +"<<endl;
        cout<<"SUBTRACAO: -"<<endl;
        cout<<"MULTIPLICACAO: *"<<endl;
        cout<<"DIVISAO: /"<<endl;
        cout<<"RAIZ QUADRADA: @"<<endl;
    }


    return 0;
}
