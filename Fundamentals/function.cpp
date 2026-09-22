#include<iostream>
using namespace std;
int sumn(int n)          //parameters
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
void change(int b)
{
    b=20;
}

int main()
{
    int a=10,x=10;;
    cout<<sumn(a);                            //arguments,   pass by value
    change(&x);
    cout<<x;
}