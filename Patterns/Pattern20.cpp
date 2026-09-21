// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5

// 1 1 1 1 1 1 1 1 1
// 1 2 2 2 2 2 2 2 1
// 1 2 3 3 3 3 3 2 1
// 1 2 3 4 4 4 4 3 2
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 4 4 4 3 2
// 1 2 3 3 3 3 3 2 1
// 1 2 2 2 2 2 2 2 1
// 1 1 1 1 1 1 1 1 1
#include<iostream>
#include<algorithm>
using namespace std;  
 
void pattern(int n)
{  
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int right=(2*n-2-j);
            int down=(2*n-i-2);
            // cout<<"top : "<<top<<" left : "<<left<<" right : "<<right<<" down : "<<down<<endl;
            cout<<(2*n-1-max(max(top,down),max(left,right)));
            // cout<<n-(2*n-2-i)/2;
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




// for(int i=0;i<=n*2-1;i++)
//     {   if(i<n-1)
//         {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<n-j;
//         }
//         for(int j=0;j<n*2-2*i-3;j++)
//         {
//             cout<<n-i;
//         }
//         int x=i;
//         for(int j=0;j<=i;j++)
//         {
//             cout<<n-x;
//             x--;
//         }
//         cout<<endl;
//         }
//         if(i==n)
//         {
//             cout<<endl;
//         }
//         else if(i>n)
//         {
//             int x=0;
//             for(int j=0;j<=i-n-1;j++)
//             {
//                 if(j==0||i==n*2-1)
//                 {
//                     cout<<n;
//                 }
//                 else{
//                 cout<<n-1;
//                 }
//             }
//             cout<<endl;
//         }
//     }
    