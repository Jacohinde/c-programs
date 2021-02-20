/*Un programa que lea un numero del 1 al 10 en la entrada y muestre en la salida
la tabla de multiplicar de dicho numero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=27;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
	getch();
	return 0;
}
