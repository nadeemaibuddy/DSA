#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse_of_an_array(int n,int arr[])
{
    int left=0,right=n-1;
    while(left<right)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        reverse_of_an_array(n,arr);
    }
}



// void reverse_of_an_array(int n,int arr[])
// {
//     for(int i=0;i<n/2;i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
// }


//two pointer apporache
// void reverse_of_an_array(int n,int arr[])
// {
//     int left=0,right=n-1;
//     while(left<right)
//     {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
// }