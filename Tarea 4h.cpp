

#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cout<<"De cuantas caracteres sera tu texto? ";
    cin>>n;
    char caracter[n];

    cout<<"Ingresa tu palabra: ";
    for(int i=0; i<n; i++){
        cin>>caracter[i];
    }

    cout<<"Ingresa el indice de a: "; cin>>a;
    cout<<"Ingresa el índice de b: "; cin>>b;

    if(a<0)a=0;
    if(b>n)b= n -1;

    while(a<b){

        char aux = caracter[a];
        caracter[a] = caracter[b];
        caracter[b] = aux;

        a++;
        b--;
    }

    cout<<"Resultado: ";
    for(int i=0; i<n; i++){
        cout<<caracter[i];
    }




    return 0;
}
