/**04. Program to find the minimum element**/

#include<iostream>
using namespace std;

int findMin(int arr[] , int size)
{
    int min = arr[0];

    for(int i =1; i<size;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5] = {76 , 89 , 67 , 23 , 24};

    cout<<"The minimum element is  "<<findMin(arr , 5)<<endl;

    return 0;
}
