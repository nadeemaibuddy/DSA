#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> account={{1,5},{7,3},{3,5}};
    int rich=0;
    for(int i=0;i<account.size();i++)
    {
        int sum=0;
        for(int j=0;j<account[0].size();j++)        //focus heres//early program worked because of c++ undefine behavior.
        {
            sum+=account[i][j];
        }
        cout<<sum<<endl;
        if(rich<sum)
        {
            rich=sum;
        }
    }
    cout<<rich<<endl;
}