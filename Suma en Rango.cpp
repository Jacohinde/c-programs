#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, suma = 0;
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero>0){
			suma = suma + numero; //suma += numero;
		}
	}while((numero != 0) && (numero<20) || (numero>30));
	
	cout<<"La suma de los numeros es igual a: "<<suma<<endl;
	
	system("pause");
	return 0;
}
