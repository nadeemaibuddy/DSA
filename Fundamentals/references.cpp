// References are alternative name for existing variable
//if a references is created fo a vairiable then it cant be re assigined to other variable
//cant be null



#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &x=a;
    cout<<a<<endl;
    cout<<x<<endl;

}