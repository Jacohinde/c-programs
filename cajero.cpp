/*Crea la interfaz de un cajero automatico que muestre la cantidad de 1,000 dolares y despliegue un menu*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
  int saldo_inicial = 1000, opc;
  float extra, saldo = 0, retiro;

  cout<<"\tBienvenido a su Cajero Virtual"<<endl;
  cout<<"1. Ingresar dinero en cuenta"<<endl;
  cout<<"2. Retirar dinero de la cuenta"<<endl;
  cout<<"3. Salir"<<endl;
  cout <<"Opcion: "<<endl;
  cin>>opc;

  switch(opc){
  case 1:
    cout<<"Digite la cantidad que desea ingresar: ";
    cin>>extra;
    saldo = saldo_inicial + extra;
    cout<<"Dinero en cuenta: "<<saldo;break;
  case 2:
  cout<<"Digite la cantidad de dinero que va a retirar: ";
  cin>>retiro;

  if(retiro>saldo_inicial){
    cout<<"NO cuenta con dinero suficiente para la transaccion";
  }
  else{
    saldo = saldo_inicial-retiro;
    cout<<"Dinero en Cuenta: "<<saldo;
  }
  case 3: break;
  }


  getch();
  return 0;
}
