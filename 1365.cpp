#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> n={6,5,4,8};
    for(int i=0;i<n.size();i++)
    {
        int x=0;
        for(int j=0;j<n.size();j++)
        {
            if(n[i]>n[j])
            {
                x++;
            }
        }
        cout<<x;
    }
}