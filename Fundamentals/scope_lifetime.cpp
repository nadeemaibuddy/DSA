#include<iostream>
using namespace std;
int x=10;                           //global (default value=0) entire program
void scope()
{
    static int y=10;                //default value=0   lifetime entire program.(combine of global and local)
    int x=20;                       //local (default value garbage)
    cout<<x<<endl;                            //choose the nearest variable if the names are same
    y+=10;
    cout<<y<<endl;
}
int main()
{
    
    scope();
    scope();
    scope();
}