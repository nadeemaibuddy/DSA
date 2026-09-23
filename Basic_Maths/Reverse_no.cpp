//only a positive number can be reversed

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int reverseNumber(int n) {
    int digit=0;
    int rev=0;
    if(n<0)  return false;
    if(n>0)
    {
        while(n>0)
        {
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
    }
    
    return  rev;
    }
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<boolalpha<<reverseNumber(n)<<endl;
    }
}