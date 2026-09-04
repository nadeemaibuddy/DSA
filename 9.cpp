// g++ filename.cpp -o filename
// ./filename
#include<iostream>
using namespace std;
int main()
{
    int n=-121;
    int r,x=n;
    long long int rev;
    if(n<0)
    {
        cout<<"false"<<endl;
    }
    else{
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(x==rev)
    {
        cout<<"true";
    }}
    
}