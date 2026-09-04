#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int even=0,c=0;
    vector<int> num={437,315,322,431,686,264,442};
    for(int i=0;i<num.size();i++)
    {
        c=0;
        while(num[i]!=0)
        {
            num[i]=num[i]/10;
            c++;
        }
        if(c%2==0)
        {
            even++;
        }
    }
    cout<<even;
}