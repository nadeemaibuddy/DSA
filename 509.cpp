#include<iostream>
using namespace std;
int fib(int x)
{
    if(x==0){
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}

int main()
{
    
    int n;
    cin>>n;
    cout<<fib(n)<<endl;

}
// x=3
// fib(3-1)
// x=2
// fib(2-1)
// x=1
// return's 1
// fib(2-2)
// x=0
// return's 0
// return 1+0
// fib(3-2)
// x=1
// return's 1
// then returns 1+1
// 2