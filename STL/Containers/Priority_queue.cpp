//priority_queue 
//push , pop, top  take O(1)
//not a linear data structure
//similar to queue but tree data structure is maintained inside it.
//push,pop  O(log n)
//top  O(1)


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //max heap
    priority_queue<int>pq;
    pq.push(1);
    pq.emplace(20);
    pq.push(2);
    pq.push(10);
    pq.push(7);
 
    cout<<pq.top();       // just print the highest value

    pq.pop();       //delete the highest value
    cout<<pq.top();


    ////min heap
    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(1);
    // pq.emplace(20);
    // pq.push(2);
    // pq.push(10);
    // pq.push(7);

    // cout<<pq.top();       // just print the lowest element (value)

    // pq.pop();       //delete the lowest element (value)
    // cout<<pq.top();
}