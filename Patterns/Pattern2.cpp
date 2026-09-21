#include<iostream>
using namespace std;

void patter(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
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
    patter(n);
    }
}



// 1
// 22
// 333
// 4444
// 55555
// void patter(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<i;
//         }
//         cout<<""<<endl;
//     }
// }

//  *                
//  **              
//  ***              
//  ****             
//  *****
// void patter(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<""<<endl;
//     }
// }


// 1             
// 12           
// 123          
// 1234         
// 12345
// void patter(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<""<<endl;
//     }
// }