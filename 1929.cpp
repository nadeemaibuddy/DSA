#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>x={1,3,2,1},nums=x;
    for(int i=0;i<x.size();i++)
    {
        nums.push_back(x[i]);
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
    }


}