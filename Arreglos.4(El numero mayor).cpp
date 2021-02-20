#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100], n, mayor = 0;
	
	cout<<"Digite el numero de digitos que tendra el Arreglo"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<".- Digite un numero: ";cin>>numeros[i];
	
	if(numeros[i] > mayor){
		mayor = numeros[i];
      }
	}
	cout<<"\nEl numero mayor es: "<<mayor<<endl;
	
	system("Pause");
	getch();
	return 0;
}
