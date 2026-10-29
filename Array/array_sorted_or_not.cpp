#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool array_sorted_or_not(int n,int arr[])
{
    int f=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            f=0;
            break;
        }
    }
    return f;
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
        cout<<array_sorted_or_not(n,arr)<<endl;
    }
}




// bool array_sorted_or_not(int n,int arr[])
// {
//     int f=1;
//     for(int i=0;i<n;i++)
//     {
//         if(i!=n-1)
//         {
//         if(arr[i]>arr[i+1])
//         {
//             f=0;
//             break;
//         }
//     }
//     }
//     return f;
// }