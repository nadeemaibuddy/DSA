#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="nadeem";
    // for just reading.ch has a copy of character 
    for(char ch:name)             //for(int i=0;i<name.size();i++)
    {
        cout<<ch;                //cout<<name[i];
    }

    //to change the actual string
    for(char &ch:name)
    {
        ch='-';
        cout<<ch;
    }
}