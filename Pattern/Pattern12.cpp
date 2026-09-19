// A
// AB
// ABC
// ABCD
// ABCDE

#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(char)('A'+j);
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



