#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "loveleetcode";
    int feq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        feq[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(feq[s[i]-'a']==1)
        {
            cout<<i;
            break;
        }
        else{
            continue;
        }
    }
    
}