//unordered set same as set
//all operations (insert,delete) take O(1)
//but onec in a million it take O(n);
//and store element in unsorted order
//lower and upper bound function doesnot works

#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.emplace(4);
    for(auto i:s)
    {
        cout<<i<<endl;
    }

    // auto r=s.find(3);     //find(return address (iterator that point to that value))
    // cout<<*(r)<<endl;

    // auto r1=s.find(6);   //return or give the address after the end (.end())
    // cout<<*(r1)<<endl;

    s.erase(2);         //erase the given element

    // auto r=s.find(3);     
    // auto r1=s.find(6); 
    // s.erase(r,r1);

    s.count(1);  // return the coumt of the element






}