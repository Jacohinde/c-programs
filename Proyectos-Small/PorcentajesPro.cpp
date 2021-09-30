#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int optA;
	cout<<"BIENVENIDOS A LA PLATAFORMA DE CALCULO DE PORCENTAJES MAS COMPLETA DE LA RED"<<endl;
	cout<<"****************   ************************   ****************************"<<endl;
	cout<<"Escoga la opcion que desea calcular: "<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"1.-Obtener Valor del Porcentaje"<<endl;
	cout<<"Ejemplo.- ¿Cuanto es el 47% de 1290?"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"2.-Obtener Porcentaje de un Valor"<<endl;
	cout<<"Ejemplo.- ¿Que porcentaje de 1290 es 603.3?"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"3.-Obtener el 100%"<<endl;
	cout<<"Ejemplo.- ¿Si 603.3 es el 47%, cual es el 100%?"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Ingrese el numero de la opcion que haya elegido. Si desea salir del programa, pulse cualquier otra tecla: ";cin>>optA;
	
	if(optA==1){
	float n1, n2, Porcentaje = 0;
     cout<<"Este programa es para saber el valor del porcentaje de la cantidad que usted desee."<<endl;
     cout<<"Ejemplo.- ¿Cuanto es el 47% de 1290?"<<endl;
  
     cout<<"Quiero saber cual es el %";cin>>n2; 
     cout<<"De la cantidad: ";cin>>n1;

     Porcentaje = (n1/100) * n2;

     cout<<"\nEl resultado es: "<<Porcentaje<<endl; 
	}
	if(optA==2){
		float nn1, nn2, uno = 0, valort = 0;
     cout<<"Este programa es para saber el porcentaje del valor de la cantidad que usted desee."<<endl;
     cout<<"Ejemplo.- ¿Que porcentaje de 1290 es 603.3?"<<endl;
  
     cout<<"Si el 100% es ";cin>>nn1; 
     cout<<"Cual es el porcentaje que equivale a la cantidad de: ";cin>>nn2;

     uno = nn1/100;
	 valort = nn2/uno;

     cout<<"\nResultado: El numero "<<nn2<<" equivale al "<<valort<<"% de "<<nn1<<endl;
		
	}
	if(optA==3){
		float np1, np2, unok = 0, valortot = 0;
     cout<<"Este programa es para saber el 100% de un numero que representa un determinado porcentaje."<<endl;
     cout<<"Ejemplo.- Si 603.3 es el 47%, cual es el 100%?"<<endl;
  
     cout<<"Si el numero ";cin>>np1; 
     cout<<"Es el: %";cin>>np2;

     unok = np1/np2;
	 valortot = unok*100;

     cout<<"\nResultado: El 100% es igual a: "<<valortot<<endl;
	}
	
	getch();
	return 0;
}
