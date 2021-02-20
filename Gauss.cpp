//El Problema de Gauss: el usuario debe introducir dos dígitos y el programa arrojará
//el resultado de la suma de todos los números que se encuentran entre los dos dígitos.
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int inicial= 0, n1, n2, oper, resultado;
	
	cout<<"Bienvenido al mundo de Gauss. Puede usted digitar dos numeros y el programa le"<<endl;
	cout<<"dara el resultado de la suma de todos los numeros entre ambos digitos"<<endl;
	cout<<"Pulse '1' para continuar ";cin>>inicial;
	
	if(inicial == 1){
		cout<<"Digite el primer numero de la escala a sumar ";cin>>n1;
		cout<<"Digite el ultimo numero de la escala a sumar ";cin>>n2;;
		
		oper = n2 / 2;
		resultado = oper * (n1+n2);
		
		cout<<"El resultado de la Suma General es: " <<resultado<<endl;
		
	}
	
	
	getch();
	return 0;
}
