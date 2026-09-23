#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPalindrome(int n)
{ 
    int reversedhalf=0;
    if(n<0) return false;
    if(n!=0 && n%10==0) return false;
    if(n>0)
    {
        while(n>reversedhalf)
        {
            int digit=n%10;
            reversedhalf=reversedhalf*10+digit;
            n=n/10;
        }
    } 
    return n==reversedhalf || n==reversedhalf/10;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<isPalindrome(n)<<endl;
    }
}

// bool isPalindrome(int n)
// { 
//     int digit=0;
//     int rev=0,x=n;
//     if(x<0)  return false;
//     if(n>0)
//     {
//         while(n>0)
//         {
//             digit=n%10;
//             rev=rev*10+digit;
//             n=n/10;
//         }
//     }
//     return x==rev;
// }