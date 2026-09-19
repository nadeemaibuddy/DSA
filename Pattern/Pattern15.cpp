//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA



#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<(char)('A'+j);
        }
        if(i==0)
        {
            cout<<endl;
            continue;
        }
        int x=i;
        for(int j=0;j<i;j++)
        {
            x--;
            cout<<(char)('A'+x);
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



