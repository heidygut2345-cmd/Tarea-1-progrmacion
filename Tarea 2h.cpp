#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string cadena; 
	int pos1, pos2; 
	
	cout<<"ingrese una cadena sin espacios"; 
	cin>>cadena; 
	
	cout<<"ingrese posicion 1"; 
	cin>>pos1; 
	
	cout<<"ingrese posicion 2"; 
	cin>>pos2; 
	
	if(cadena.empty()){
		cout<<"cadena vacia\n";
		return 0; 
		
	}
	
	if (pos1 > pos2){
		cout<<"Error: valor poscion 1 mal ingresado\n";
		return 0; 
	}
}
