// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15


#include<iostream>
using namespace std;
void pattern(int n)
{
    int p=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   
            p+=1;
            cout<<p;
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



