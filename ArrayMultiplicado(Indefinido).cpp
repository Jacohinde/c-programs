////un programa que lea los numeros de un arreglo NO DETERMINADO, y los copie a otro arreglo, pero
//multiplicados X2.
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nums[1000]={};
	int num2[1000]={};
	int n, multi, start;
	
	cout<<"Digite cuantos valores tendra el Arreglo: "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite el valor "<<i+1<<": "<<endl;
		cin>>nums[i];
	}
	for(int i=0;i<n;i++){
		num2[i]=nums[i]*2;
		cout<<"El valor "<<i+1<<" es:"<<num2[i]<<endl;
	} 
	

	
	getch();
	return 0;
}
