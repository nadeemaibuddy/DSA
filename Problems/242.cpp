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



// string   s = "rat", t = "car";
//     if(s.size()!=t.size())
//     {
//         cout<<"fasle";
//     }
//     int freq[26]={0};
//     for(int i=0;i<s.size();i++)
//     {
//         freq[s[i]-'a']++;
//         freq[t[i]-'a']--;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(freq[i]!=0)
//         {
//             cout<<"false";
//         }
//     }
//     cout<<"true";