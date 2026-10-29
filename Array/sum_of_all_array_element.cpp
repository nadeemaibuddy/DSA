#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int sum_of_all_array_element(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        sum+=x;
    }
    return sum;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<sum_of_all_array_element(n)<<endl;
    }
}




//T O(N)  
 // int sum_of_all_array_element(int n,int arr[])
// {
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;

// }
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         cout<<sum_of_all_array_element(n,arr)<<endl;
//     }
// }