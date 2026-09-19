// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int str=i;
        if(i>n){ str=2*n-i;};
        for(int j=1;j<=str;j++)
        {
            cout<<"*";
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


// void pattern(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }