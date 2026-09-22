#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string name="nadeem";
    for(char &ch :name)
    {
        ch=toupper(ch);
        // ch=tolower(ch);
        isdigit(ch)    // Is digit?
        isalnum(ch)    // Is alphabet or digit?
        isalpha(ch)    // Is alphabet?
        isspace(ch)    // Is space?
    }
    cout<<name;
}
