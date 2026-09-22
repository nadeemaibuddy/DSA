#include<iostream>
using namespace std;
struct practice{
    //default access specifier is public.
    int x=10;
    float y=20;
};
int main()
{
    struct practice p1;
    cout<<p1.x;
    cout<<p1.y;  
}