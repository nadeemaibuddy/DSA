#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
//O(sqrt n)
bool prime(int n)
{
    
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<prime(n);
    }
}


// int r=0;
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             r++;
//             if(i!=n/i)
//             {
//                 r++;
//             }
//         }
//     }
//     return r==2;


//O(sqrt n)
// bool prime(int n)
// {
//     int r=0;
//     if(n<=1)
//     {
//         return false;
//     }
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0){
//             r++;
//             if(n/i!=i)
//             {
//                 r++;
//             }
//         }
//     }
//     return r==0;
// }

//O(n)
// bool prime(int n)
// {
//     int r=0;
//     if(n<=1)
//     {
//         return false;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0){
//             r++;
//         }
//     }
//     return r==0;
// }