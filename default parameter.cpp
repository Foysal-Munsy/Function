#include<iostream>
#include<conio.h>
using namespace std;

void display(int a=20, int b=30)
{
    cout<<a<<" Default Parameters   "<<b;
}
int main()
{
    display();
    getch();
}
