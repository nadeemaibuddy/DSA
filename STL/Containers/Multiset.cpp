//multiset
//same as set but it can store duplicate values

#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    ms.emplace(2);
    
    // ms.erase(1);    //delete all duplicate values not a single 1 but both 1,1
    // ms.erase(ms.find(1));   //delete first occurence
    ms.erase(ms.find(1),ms.end());   //delete the range of numbers
    for(auto i:ms)
    {
        cout<<i<<endl;
    }

    

}