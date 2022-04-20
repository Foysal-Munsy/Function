/**03.Swapping using Call-by-pointer- InfoBrother**/

#include<iostream>
using namespace std;


void swap(int *i , int *j)
{
    int temp=*j;
    *j=*i;
    *i=temp;
}

main()
{
    int a,b;
    cout<<"Enter The value of A : ";
    cin>>a;
    cout<<"\nEnter The value of B : ";
    cin>>b;

    cout<<"\n Before saping the value is : A = "<<a<<" B = "<<b<<endl;

    swap(a,b);
    cout<<" After swaping the value is A = :"<<a<<" B = "<<b<<endl;

    return 0;
}
