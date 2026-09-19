// E 
// D E 
// C D E 
// B C D E 
// A B C D E


#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        int x=i;
        for(int j=1;j<=i;j++)
        {
            cout<<(char)('E'-x+1);
            x--;
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



