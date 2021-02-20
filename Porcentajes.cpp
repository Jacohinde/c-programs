
#include<iostream>
#include<conio.h>

using namespace std;
//Se debe calcular el determinado porcentaje de cierta cantidad, dejando ambas variables a elección del usuario.
int main() {
  float n1, n2, Porcentaje = 0;
  cout<<"Este programa es para saber el porcentaje de la cantidad que usted desee."<<endl;
  
  cout<<"Quiero saber cual es el %";cin>>n2; 
  cout<<"De la cantidad: ";cin>>n1;

  Porcentaje = (n1/100) * n2;

  cout<<"\nEl resultado es: "<<Porcentaje<<endl;
  

  getch();
  return 0;
}
