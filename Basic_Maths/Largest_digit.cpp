#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int largestDigit(int n) 
{
    int ldigit=0;
    if(n>0)
    {
        while(n>0)
        {
            if(ldigit<n%10)
            {
                ldigit=n%10;
            }
            n=n/10;
        }
    }
    return ldigit;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<largestDigit(n)<<endl;
    }
}