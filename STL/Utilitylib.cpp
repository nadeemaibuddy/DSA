// #include<bits/stdc++.h>   //include all lib
// using namespace std;

// containers     vector,arrays,
// functions
// iterator
// algorithms


#include<utility>
void pairlib()
{
    pair<int,int> p={1     ,     2};   //can have only two numbers
    //               first      second
    cout<<p.first<<" "<<p.second<<endl;

    //to store more than two values
    pair<int,pair<int,int>> p1={1,{2,3}};

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;

}

int main()
{
    pairlib();
}