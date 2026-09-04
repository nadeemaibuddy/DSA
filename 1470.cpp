#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> n={1,1,2,2},x,y;
    int a=2,i=0,j=0;
    for(int i=a;i<n.size();i++)
    {
        x.push_back(n[i]);
    }
    for(int i=0;i<a;i++)
    {
        n.pop_back();
    }

    while(y.size()<(n.size()+x.size()))
    {
        if(y.size()%2==0)
        {
            y.push_back(n[i]);
            i++;
        }
        else{
            y.push_back(x[j]);
            j++;
        }
    }
    for(int i=0;i<y.size();i++)
    {
        cout<<y[i];
    }
    // [2,3,5,4,1,7]

}