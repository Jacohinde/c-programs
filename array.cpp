#include <iostream>
#include <conio.h>

using namespace std;

int main() {
 char colour[4][10] = {"Blue", "Red", "Orange",  
                    "Yellow"}; 
 
 for (int i = 0;i<4;i++){
        cout << colour[i] << "\n";
		}
 
 getch();
 return 0;
} 
