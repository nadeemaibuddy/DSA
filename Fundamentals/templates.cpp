#include<iostream>
using namespace std;
// //function templates
// //can be use with any datatype insted of creating a function for every data type
// template<typename T>
// T add(T a,T b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<add(10,20)<<endl;
//     cout<<add(11.56,17.45)<<endl;
// }




//class template
template<typename T>
class A{
    public:
    T a,b;
    void show(T x)
    {
        a=x;
        cout<<a<<endl;
    }
    void show(T x,T y)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A<int> obj;
    obj.show(10);
    A<int> obj1;
    obj1.show(10,10);
    A<double> objf;
    objf.show(3.14,6.34);
}

//multiple types
//template <typename T,typename T2>
//class name<type1,type2>object;



// #include <iostream>
// using namespace std;
// template <typename T>
// class Box {
//     T value;
// public:
//     Box(T v): value(v) {}
//     void show(){ cout << value << " "; }
// };
// int main(){
//    Box<> b1(10);
//    Box b2(5.5);
//    b1.show();
//    b2.show();
//    return 0;
// }
