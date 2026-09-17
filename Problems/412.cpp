#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> fizz{};
    int n=3,i=1;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            fizz[i]+=to_string(i);
        }
        cout<<fizz[i];
    }
    
}
