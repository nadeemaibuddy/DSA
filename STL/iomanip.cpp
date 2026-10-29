#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=10,b=945159371;
    float c=3.142625673;
    cout<<a<<endl;

    //if we declare one from these three then all the umbers are shown only in that base in the whole program until we again change the base
    //persists until changed
    cout<<hex<<b<<endl;
    cout<<oct<<b<<endl;
    cout<<dec<<b<<endl;

    //persists until changed
    cout<<boolalpha<<(a>b)<<endl;
    cout<<noboolalpha<<(a>b)<<endl;

    //persists until changed
    cout<<showpos<<a<<endl;
    cout<<noshowpos<<a<<endl;

    //persists until changed
    cout<<uppercase<<hex<<b<<endl;
    cout<<nouppercase<<hex<<b<<endl;
    cout<<dec;

    //applied only once
    cout<<setw(8)<<a<<endl;  //default
    cout<<a<<endl;

    //persists until changed
    cout<<setw(8)<<setfill('*')<<a<<endl;
    cout<<setw(8)<<a<<endl;

    cout<<setprecision(3)<<c<<endl;
    cout<<c<<endl;
    
}