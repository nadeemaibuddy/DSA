#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int countprime(int n)
{
    if(n<=2)
    {
        return 0;
    }
    int count=1;
    for(int i=3;i<n;i+=2)
    {
        bool prime=true;
        for(int j=3;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime=false;
            }
        }
        if(prime) count++;
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
        cout<<countprime(n)<<endl;
    }
}


// int countprime(int x)
// {
//     int count=0;
//     for(int n=0;n<x;n++)
//     {
//     here:
//     if(n<=1)
//     {
//        continue;
//     }
//     else if(n==2)
//     {
//         count++;
//         continue;
//     }
//     else if(n%2==0)
//     {
//         continue;
//     }
//     for(int i=3;i*i<=n;i+=2)
//     {
//         if(n%i==0)
//         {
//             n++;
//             goto here;
//         }
//     }
//     count++;
//     }
//     return count;
// }