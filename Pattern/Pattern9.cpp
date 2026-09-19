// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321


#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        for(int j=0;j<2*n-2*i-2;j++)
        {
            cout<<" ";
        }
        int x=i,y=0;
        for(int j=0;j<=i;j++)
        {
            cout<<x+1+y;
            y--;
        }
        cout<<endl;
    }
}
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        pattern(n);
    }
}



