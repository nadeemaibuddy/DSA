//  *****
//  *****
//  *****
//  *****
//  *****

#include<iostream>
using namespace std;

void patter(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
    patter(n);
    }
}