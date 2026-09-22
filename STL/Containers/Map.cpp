//map is a container  O(log n)
//which stores data in the {key,value} paire
//where key can be of any datatype but it should be unique and it is stored in sorted order
//and value can be of any datatype.

//multiple map  same as map but it can store duplicate keys  
//unordered map  sam as map but it store in unsorted order  O(1)


#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    map<int,pair<int,int>> m1;
    map<pair<int,int>,int> m2;


    m[1]=2;
    m.insert({2,3});
    m.emplace(3,4);

    m2[{2,3}]=10;

    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m[1]<<endl;   //1 is key not index
    cout<<m[5]<<endl;   //gives 0 because it does not exists


    auto it1=m.find(2);
    cout<<*(it1).second;   //.second because first gives key
    
    // auto it=m.find(5);   points to .end();
}
