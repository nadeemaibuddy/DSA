#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={3,2,4},x;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if((nums[i]+nums[j])==6&& i!=j)
            {
                x.push_back(i);
                x.push_back(j);
            }
        }
    }
    cout<<x[0]<<x[1];
}