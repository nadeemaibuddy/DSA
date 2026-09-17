#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> n={1,2,3,4},x=n;
    for(int i=1;i<n.size();i++)
    {
        n[i]=n[i]+n[i-1];
    }
    // n[0]=1      n[0]=n[0]+n[-1]     ==  n[0]=1+nothing    n[0]=1
    // n[1]=2      n[1]=n[1]+n[0]      ==  n[1]=2+1          n[1]=3
    // n[2]=3      n[2]=n[2]+n[1]      ==  n[2]=3+3          n[2]=6
    // n[3]=4      n[3]=n[3]+n[3]      ==  n[3]=4+6          n[2]=10

    for(int i=0;i<n.size();i++)
    {
        cout<<n[i];
    }
    // for(int i=0;i<n.size();i++)
    // {
    //     int sum=0;
    //     for(int j=0;j<i+1;j++)
    //     {
        //         sum+=n[j];
    //     }
    //         x[i]=sum;
    // }
    // for(int i=0;i<n.size();i++)
    // {
    //     cout<<x[i];
    // }
    }