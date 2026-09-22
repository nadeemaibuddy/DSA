#include<iostream>
using namespace std;
class A{
    public:
    // void passbyvalue(int x)    // copy created
    // {
    //     x+=10;
    // }


    // void passbyreference(int &x)      //  original value
    // {
    //     x+=10;
    // }

    void passbypointer(int *x)        //    original value
    {
        *x+=10;
    }
};
int main()
{
    int n=10;
    A obj;
    // obj.passbyvalue(n);       //value dont change
    // obj.passbyreference(n);          //changes value because reference
    obj.passbypointer(&n);
    cout<<n;
}