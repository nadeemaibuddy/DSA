#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        if(i==3)
        {
            continue;           //skip the current iteration 
        }
        if(i==5)
        {
            break;              //break come out of the loop
        }
        cout<<i;
    }
}