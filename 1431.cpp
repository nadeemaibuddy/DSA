#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    vector<int> candies={2,3,5,1,3};
    vector<bool> result;
    int extracandies=3;
    int kidwithmorecandies=0;
    for(int i=0;i<candies.size();i++)
    {
        if(kidwithmorecandies<candies[i])
        {
            kidwithmorecandies=candies[i];     //get highest candies
        }
        candies[i]+=3;                        //give eache kid extra candie
    }
    for(int i=0;i<candies.size();i++)
    {
        if(candies[i]>=kidwithmorecandies)   //checking which kid has candies more then highest candies after receving extra candie 
        {
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    for(int i=0;i<candies.size();i++)
    {
        cout<<boolalpha;
        cout<<result[i];
    }
}