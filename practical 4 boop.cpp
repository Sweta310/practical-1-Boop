/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
double  c_tmp, f_tmp;
cout << "Take an input in celsius and then convert it into some value: ";
cin >> c_tmp;
f_tmp = (c_tmp * 1.8) + 32;
cout << "Temperature in Fahreinheit: " << f_tmp;
return 0;
}