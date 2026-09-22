#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> n3={20,30,40,50,60};
    vector<int> n5=(n3);        //copy

    // vector<int>:: iterator it =n3.begin();   //n3.begin give starting element position
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;

    // vector<int>:: iterator it1 =n3.end();    //n3.end() points or givr the address after the last element;
    // it1--;
    // cout<<*(it1)<<endl;

    // think in reverse way
    // vector<int>:: iterator it2 =n3.rend();   //rend -reverse end it points before the first element
    // vector<int>:: iterator it1 =n3.rbegin(); //rbegin -reverse begin points after the last element

    //  using iterator
    for(vector<int>:: iterator it4=n3.begin();it4!=n3.end();it4++)
    {
        cout<<*(it4)<<endl;
    }

    // using auto
    // auto a=5;    - automatically set the data according to the value
    // vector<int> :: iterator it; === auto it;
    for(auto it5=n3.begin();it5!=n3.end();it5++)
    {
        cout<<*(it5)<<" ";
    }

}
