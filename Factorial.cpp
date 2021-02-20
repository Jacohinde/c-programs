#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, factorial = 1;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial = factorial * i;
	}
	cout<<"El factorial de "<<numero<<" es: "<<factorial;
	
	getch();
	return 0;
}
