// *****
// *   *
// *   *
// *   *
// *****

#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                cout<<"*";
            }
            else{
            cout<<" ";
            }
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



// for(int i=0;i<n;i++)
//     {
//         if(i==0||i==n-1)
//         {
//         for(int j=0;j<n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//         }
//         else{
//             cout<<"*";
//         for(int j=0;j<n-2;j++)
//         {
//             cout<<" ";
//         }
//           cout<<"*";
        
//         cout<<endl;
//         }
//     }

