#include<iostream>
using namespace std;
bool isArmstrong(int n) 
{
    
    int x=n,s=0;
    int digit;
    while(n>0)
    {
        digit=n%10;
        s+=digit*digit*digit;
        n=n/10;
    }
   
    return x==s;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<boolalpha<<isArmstrong(n)<<'\n';
    }
}
