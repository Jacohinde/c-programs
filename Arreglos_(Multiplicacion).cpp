#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, numeros[100] = {};
	int mult = 1;
	
	cout<<"Digite la cantidad de numeros que desea multiplicar: "<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Digite el numero "<<i+1<<":"<<endl;
		cin>>numeros[i];
	
	     mult *= numeros[i];
	 }

 cout<<"La multiplicacion de los digitos es: "<<mult<<endl;
 
	getch();
	return 0;
}
