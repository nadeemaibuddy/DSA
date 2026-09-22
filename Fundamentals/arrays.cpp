#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};         //index sarts from 0 and ends size-1
    cout<<arr[1];

    // int arr1[10];                   //uninitialized

    // int arr2[10]={0};               //allvalues initialized to zero
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    //2D array
    // int arr3[3][4];    3 rows , 4 coloumns    //stored in row major order

}