#include <iostream>
#include <conio.h>

using namespace std;

int main() {
 
 char vec1[100]= {'a','b','c','d','e'};
 char vec2[] = {'f','g','h','i','j'};
 char vec3[10];
 
 for(int i=0;i<5;i++){
  vec3[i] = vec1[i];
 }
 
 for(int i=5;i<10;i++){
  vec3[i] = vec2[i-5];
 }
 for(int i=0;i<10;i++){
 	cout<<vec3[i]<<endl;
 }
 
 
 getch();
 return 0;
} 
