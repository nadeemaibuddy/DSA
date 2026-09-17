#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>n={400};
    for(int i=0;i<n.size();i++)
    {
        int l=0;
        for(int j=i+1;j<n.size();j++)
        {
            if(l<n[j])
            {
               l=n[j];
            }
        }
        n[i]=l;
        if(i==(n.size()-1))
        {
            n[i]=-1;
        }
        
    }
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i];
    }
}