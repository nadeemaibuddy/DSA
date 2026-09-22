//set 
//store elements in sorted order
//no duplicates
//not a linear data structures,  tree data structure is used
//insert ,erase,find take O(log n)


#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
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