#include<iostream>
using namespace std;
int main(){
    int n=14;
    int steps;
    for(steps=0;n!=0;steps++)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else{
            n-=1;
        }
    }
    cout<<steps;
}