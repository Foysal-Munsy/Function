#include <iostream>
#include <conio.h>
using namespace std;
int addition ( int, int);
int main()
{
    int result= addition (15,10);
    cout<< result;
    getch();
}
int addition(int a, int b)
{
    int sum= a+b;
    return sum;
}
