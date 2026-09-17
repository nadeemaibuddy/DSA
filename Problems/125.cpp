#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    string s="0P",s2;
    for(char &ch:s)
    {
        ch=tolower(ch);
        if(isalnum(ch))
        {
            s2.push_back(ch);
        }
    }
    s=s2;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    cout<<s;
    if(s==s2)
    {
        cout<<"true";
    }else{
        cout<<"fasle";
    }
}









// // reverse(s.begin(),s.end());
// // if(s.compare(reverse(s.begin(),s.end())))
// // {
// //     cout<<"true";
// // }
// // else{
// //     cout<<"false";
// // }