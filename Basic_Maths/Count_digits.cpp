//O(log n)

#include<iostream>
using namespace std;
int countdigit(int n)
{
    int count=0;
    if(n>0)
    {
    while(n>0)
    {
        n=n/10;
        count++;
    }
    }
    else if(n<0)
    {
       while(n<0)
    {
        n=n/10;
        count++;
    } 
    }
    else{
        count=1;
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
        cout<<countdigit(n)<<endl;
    }
}