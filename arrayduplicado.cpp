//un programa que lea los numeros de un arreglo y los copie a otro arreglo, pero
//multiplicados X2.
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros1[] = {2,4,6,8,9};
	int numeros2[5];
	
	for(int i=0;i<5;i++){
		numeros2[i]= numeros1[i];
	}
	for(int i=0;i<5;i++){
		numeros2[i]= numeros2[i]*2;
		cout<<numeros2[i]<<endl;
	}
	
	
	

	getch();
	return 0;
}
