#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int count_odd_no_in_array(int n,int arr[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
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
        cout<<count_odd_no_in_array(n,arr)<<endl;
    }
}




