


#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"¿Cuantos numeros quieres ingresar?: ";
    cin>>n;

    int original[n], inverso[n];

    for(int i=0; i<n; i++){
        cout<<i+1<<". Ingresa un numero: ";
        cin>>original[i];

        inverso[i] = original[i] * -1;
    }

    cout<<"\nEl arreglo original: ";
    for(int i=0; i<n; i++){
        cout<<original[i]<<" ";

    }

    cout<<"\nEl arreglo inverso Aditivo: ";
    for(int i=0; i<n; i++){
        cout<<inverso[i]<<" ";
    }


    return 0;
}
