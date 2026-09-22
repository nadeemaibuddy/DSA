#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)                        //base case
    {
        return 1;
    }
    else{
        return x*fact(x-1);      ///recursive case
    }
}
int main()
{
    int n=5;
    cout<<fact(n);                  //stack data structure is used for function call.
}