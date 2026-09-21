// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i-1);j++)
        {
            cout<<j;
        }
        cout<<""<<endl;
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


// 12345
// 1234
// 123
// 12
// 1
// void pattern(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<j;
//         }
//         cout<<""<<endl;
//     }
// }

// *****
// ****
// ***
// **
// *
// void pattern(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<""<<endl;
//     }
// }