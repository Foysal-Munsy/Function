/**01. Addition,Subtraction, Multiplication,Division using function**/

#include <iostream>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
int main()
{
    addition(15,10);
    subtraction(35,5);
    multiplication(7,8);
    division(9,11);

    cout<< "All functions have called...";

    return 0;
}

void addition(int a, int b)
{
    int sum=a+b;
    cout<< "Sum= "<<sum<<endl;
}
void subtraction(int a, int b)
{
    int result=a-b;
    cout<< "Subtraction= "<<result<<endl;
}
void multiplication(int a, int b)
{
    int result=a*b;
    cout<< "Multiplication= "<<result<<endl;
}
void division(int a, int b)
{
    float result= (float) a/b;
    cout<< "Division= "<<result<<endl;
}
