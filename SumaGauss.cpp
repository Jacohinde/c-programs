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
		
		for(int i=n1;i<=n2;i++){
			 resultado += i;
			
		}
		cout<<resultado<<endl;
		
		
	}
	
	
	getch();
	return 0;
}
