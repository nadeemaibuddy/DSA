#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int countOddDigit(int n) {
    int oddcount=0;
    int digit=0;
    if(n>0)
    {
        while(n>0)
        {
            digit=n%10;
            if(digit%2!=0)
            {
                oddcount++;
            }
            n=n/10;
        }
    }
    else if(n<0)
    {
        while(n<0)
        {
            digit=n%10;
            if(digit%2!=0)
            {
                oddcount++;
            }
            n=n/10;
        }
    }
    return  oddcount;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<countOddDigit(n)<<endl;
    }
}