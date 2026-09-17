#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s = "LOVELY";
    for(char &ch:s)
    {
        ch=tolower(ch);
    }
    cout<<s;
}
