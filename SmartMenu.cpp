/*Escribe un programa que despliegue un men� de comida seg�n el Presupuesto Inicial del usuario*/
/*Primero debe haber una entrada donde se indique con cu�nto dinero cuenta el usuario.
De ah�, hay que integrar tres tipos de presupuesto (tres tipos de men�).
La cantidad debe entrar en una de las tres categor�as, y de esta manera se muestra el men� correspondiente*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	float presupuesto, correo;

	cout<<"Digite la cantidad que desea gastar por cada persona: "<<endl;
	cout<<"(Debe ser mayor a $150.00)"<<endl;
	cout<<"$";
	cin>>presupuesto;

	if(presupuesto<150){
		cout<<"No cuenta con presupuesto suficiente";
	}

	if((presupuesto>=150)&&(presupuesto<=200)){
		cout<<"     Menu La Toscana"<<endl;
		cout<<"Carne en su jugo...$139.00"<<endl;
		cout<<"Tortas de carne...$153.00"<<endl;
		cout<<"Refresco Inca....$39.00"<<endl;
		cout<<"Cerveza Alemana...$47.00"<<endl;
		}
	if((presupuesto>=201)&&(presupuesto<=500)){
		cout<<"     Menu Gardenias"<<endl;
		cout<<"Burritos Internacionales...$189.00"<<endl;
		cout<<"Birria Oaxaca...$210.00"<<endl;
		cout<<"Refresco Mexicano...$49.00"<<endl;
		cout<<"Cerveza Americana...$57.00"<<endl;
	}
	if((presupuesto>=501)&&(presupuesto<=850)){
		cout<<"     Menu Royal Cesar"<<endl;
		cout<<"Vegetales Africanos...$389.00"<<endl;
		cout<<"Caviar del Mediterraneo...$419.00"<<endl;
		cout<<"Vino de Grecia...$134.00"<<endl;
		cout<<"Champagna Perignon...$239.00"<<endl;
	}
	if(presupuesto>850){
		cout<<"Se recomienda buscar restaurantes de alto prestigio"<<endl;
		cout<<"Ingrese su correo electronico para enviarle la informacion correspondiente"<<endl;
		cout<<"E-mail: ";cin>>correo;
		cout<<"Un correo electronico se ha enviado con la respectiva informacion a "<<correo<<endl;
	}

	system("pause");
	getch();
	return 0;
}
