/**03.Function Return for double data type*/
#include <iostream>
#include <conio.h>
using namespace std;
double addition (double, double);
int main()
{
    cout<< addition(15.5,10.2);
    getch();
}
double addition (double a, double b)
{
    double sum= a+b;
    return sum;
}
