#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_back(4);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();

    //rest same as vector
}