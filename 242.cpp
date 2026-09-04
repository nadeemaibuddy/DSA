#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string   s = "anagram", t = "nagaram";
    if(s.size()!=t.size())
    {
        cout<<"false";
    }
    string   s = "rat", t = "car";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}








// string   s = "rat", t = "car";
// sort(s.begin(),s.end());
// sort(t.begin(),t.end());
// if(s==t)
// {
//     cout<<"true";
// }
// else{
//     cout<<"false";
// }