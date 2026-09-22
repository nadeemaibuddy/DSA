//queue  -FIFO
//push,pop,front,back  take O(1)
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.emplace(3);

    cout<<qu.back();     //just print last element pushed on the queue

    cout<<qu.front();    //just print first element pushed in the queue

    qu.pop();       //delete the first element pushed in the queue

    cout<<qu.front();

}