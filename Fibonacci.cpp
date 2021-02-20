//Hacer un programa que realice la serie Fibonacci

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, x=0, y=1, v=1;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		v = x + y; //1 2 3 5
		cout<<v<<" "; // 1 2 3 5
		x = y; //1 1 2 2r
		y = v; //1 2 3 5
	}
	
	cout<<"\n";
	
	getch();
	return 0;
}
