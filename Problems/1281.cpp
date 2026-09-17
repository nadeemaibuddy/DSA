#include<iostream>
using namespace std;
int main()
{
    int n=234,r;
    int sum=0,pro=1;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
    }
    cout<<pro-sum;
}