/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>  
using namespace std;  
int main ()  
{  
    short x = 200;  
    int y;  
    y = x;  
    cout << " Implicit Type Casting " << endl;  
    cout << " The value of x: " << x << endl;  
    cout << " The value of y: " << y << endl;  
      
    int num = 20;  
    char ch = 'a';  
    int res = 20 + 'a';  
    cout << " Type casting char to int data type ('a' to 20): " << res << endl;  
      
    float val = num + 'A';  
    cout << " Type casting from int data to float type: " << val << endl;   
    return 0;                                                                                     
}  