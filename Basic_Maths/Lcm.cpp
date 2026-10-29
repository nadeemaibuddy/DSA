#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int lcm(int n1,int n2)
{
    int a=n1,b=n2;
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return (n1*n2)/a;
    
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        cout<<lcm(n1,n2);
    }
}



// O(log(min(a,b)))
// int lcm(int n1,int n2)
// {
//     int r=0,n1=n1,n2=n2;
//     while(n1>0 && n2>0)
//     {
//         if(n1>n2)
//         {
//             n1=n1%n2;
//         }
//         else
//         {
//             n2=n2%n1;
//         }
//     }
//         r=(n1*n2)/(n2+n1);
    
//     return r;
// }



// int lcm(int n1,int n2)
// {
//     int r=0,n1=n1,n2=n2;
//     while(n1>0 && n2>0)
//     {
//         if(n1>n2)
//         {
//             n1=n1%n2;
//         }
//         else
//         {
//             n2=n2%n1;
//         }
//     }
//         r=(n1*n2)/(n2+n1);
    
//     return r;
// }



// int lcm(int n1,int n2)
// {
//     int r=0,n1=n1,n2=n2;
//     while(n1>0 && n2>0)
//     {
//         if(n1>n2)
//         {
//             n1=n1%n2;
//         }
//         else
//         {
//             n2=n2%n1;
//         }
//     }
//     if(n1==0)
//     {
//         r=(n1*n2)/n2;
//     }
//     else{
//         r=(n1*n2)/n1;
//     }
    
//     return r;
// }








// //O(n*n)
// int lcm(int n1,int n2)
// {
//     int r=0;
//     for(int i=1;i<=max(n1,n2);i++)
//     {
//        for(int j=1;j<=max(n1,n2);j++)
//        {
//         if(n1*i==n2*j)
//         {
//             r=n1*i;
//             break;
//         }
//        }
//        if(r!=0)  break;
//     }
//    return r;
// }