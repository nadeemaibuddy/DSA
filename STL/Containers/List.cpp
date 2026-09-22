//doubly linked list is maintained for vectors

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> ls={1,2,3,4};
    ls.push_back(5);
    ls.emplace_back(6);

    ls.push_front(7);
    ls.emplace_front(8);
    for(auto i:ls)
    {
        cout<<i<<" ";
    }

    //rest function same as vectors;
}