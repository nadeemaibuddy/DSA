#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int pair=0;
    vector<int> nums={1,1,1,1};
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            if(nums[i]==nums[j] && i<j)
            {
                pair++;
            }
        }

    }
    cout<<pair;
}