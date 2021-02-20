//Vamos a crear un programa que convierta Decimales-Fracciones y Fracciones-Decimales
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	float opcon, numerador, denominador, decimal, cov, v1, v2;
	float cociente = 0, nav= 0, bar1 = 100;
	int vreak=0;
	cout<<"Bienvenido a la plataforma de conversion fraccional.  Escoge una de las dos opciones: "<<endl;
	cout<<"Conversion de fraccion a numero decimal: (1)"<<endl;
	cout<<"Conversion de numero decimal a fraccion: (2)"<<endl;
	cout<<"Digite el digito de la operacion a realizar: ";cin>>opcon;
	
	if(opcon==1){
		cout<<"           ***"<<endl;	
		cout<<"Bienvenido a la conversion de fracciones a numeros decimales"<<endl;
		cout<<"           ***"<<endl;
		cout<<"Ejemplo de fraccion: "<<endl;
		cout<<"NUMERADOR:   2"<<endl;
	    cout<<"             -"<<endl;
	    cout<<"DENOMINADOR: 5"<<endl;
	    cout<<"***    ****   ***"<<endl;
	cout<<"Ingrese el NUMERADOR:   ";cin>>numerador;
	cout<<"                        -"<<endl;
	cout<<"Ingrese el DENOMINADOR: ";cin>>denominador;
	cout<<"."<<endl;
	cout<<"."<<endl;
	
	   cociente= numerador/denominador;
	
	  cout<<"La cantidad en numero decimal es: "<<cociente<<endl;
	  
	  system("pause");
	  
	  cout<<"¿Desea volver al menu principal para realizar mas operaciones?"<<endl;
	  cout<<"(Presione cualquier nuemero).- Si"<<endl;
	  cout<<"(Presione cualquier letra).- No. Deseo salir del programa"<<endl;
	  cin>>vreak;
	  
	  if(vreak==1){
	  	return main();
	  }
	  
	  else{
	  	return 0;
	  }
	}
	if(opcon==2){
		cout<<"           ***"<<endl;	
	    cout<<"Bienvenido a la conversion de numeros decimales a fracciones"<<endl;
		cout<<"           ***"<<endl;
		cout<<"           ***"<<endl;
		cout<<"Digite el numero decimal que desea convertir a fraccion: ";cin>>decimal;
		
		decimal *= 100;
		
		cout<<"El numero fraccional directo es: "<<decimal<<endl;
		cout<<"                                  -"<<endl;
		cout<<"                                 "<<bar1<<endl;
		//Primer paso: 
		v1=decimal/25;
		v2=bar1/25;
		
		cout<<v1<<endl;
		cout<<"-"<<endl;
		cout<<v2<<endl;
		
		system("pause");
	  
	  cout<<"¿Desea volver al menu principal para realizar mas operaciones?"<<endl;
	  cout<<"(Presione cualquier nuemero).- Si"<<endl;
	  cout<<"(Presione cualquier letra).- No. Deseo salir del programa"<<endl;
	  cin>>vreak;
	  
	  if(vreak=1){
	  	return main();
	  }
	  
	  else{
	  	return 0;
	  }	
	}
	else{
		return 0;
	}
	
	getch();
	return 0;
}
