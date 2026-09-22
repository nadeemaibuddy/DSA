//dynamic array. can extend size
//singly linked list is maintained for vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> n;           //creat an empty array(container)
    // cout<<n.size()<<endl;

    // // add at the last
    // n.push_back(6);
    // n.emplace_back(2);      //same as push_back

    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);
    
    // // just allocate space no value
    // vector<int> n1(5);         // {0,0,0,0,0} 
    // n1[0]=1;
    
    // // just allocate space and value
    // vector<int> n2(5,100);     //{100,100,100,100,100}
    


    // // access the vector element using index  first way

    //cout<<n[1]<<""<<n1.at(1);


    ////second way iterator
    // vector<int> n3={20,30,40,50,60};
    // vector<int> n5=(n3);        //copy

    // vector<int>:: iterator it =n3.begin();   //n3.begin give starting element position
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;

    // vector<int>:: iterator it1 =n3.end();    //n3.end() points or givr the address after the last element;
    // it1--;
    // cout<<*(it1)<<endl;

    //think in reverse way
    // vector<int>:: iterator it2 =n3.rend();   //rend -reverse end it points before the first element
    // vector<int>:: iterator it1 =n3.rbegin(); //rbegin -reverse begin points after the last element

    
    // // return front and back element
    // cout<<n.front();      // return front  element
    // cout<<n.back();       // return back element


    //pritnting a vector 

    //using for
    // for(int i=0;i<n3.size();i++)
    // {
    //     cout<<n3[i];
    // }

    //using iterator
    // for(vector<int>:: iterator it4=n3.begin();it4!=n3.end();it4++)
    // {
    //     cout<<*(it4)<<endl;
    // }

    //using auto
    //auto a=5;    - automatically set the data according to the value
    //vector<int> :: iterator it; === auto it;
    // for(auto it5=n3.begin();it5!=n3.end();it5++)
    // {
    //     cout<<*(it5)<<" ";
    // }

    // //using for each loop
    // for(auto it6:n3)
    // {
    //     cout<<it6<<" "; 
    // }
    

    //deletion

    // n3.erase(n3.begin()+1);   //delete single elements

    // n3.erase(n3.begin()+1,n3.begin()+3);
    // for(int i=0;i<n3.size();i++)
    // {
    //     cout<<n3[i]<<endl;
    // }

    //insert
    // vector<int> n4={1,2,3,4,5};
    // n4.insert(n4.begin()+1,20);   //insrt single element
    // n4.insert(n4.begin()+3,2,6);  //insert multiple elements
    // for(int i=0;i<n4.size();i++)
    // {
    //     cout<<n4[i]<<endl;
    // }

    ////swap
    // vector<int> v1={1,2},v2{3,4};
    // v1.swap(v2);
    // for(auto c:v1)
    // {
    //     cout<<c;
    // }

    
    // // remove last element
    // n.pop_back();
    
    // // empty the vector
    // n.clear();

    
    // // return 0 if vector is not empty and 1 if it is empty
    // cout<<n.empty();
    
    
    // vector<int> n;
    // n.resize(5);   //now it is inltilize with 5 space with 0 value.


    
    


    // // 2d vector
    // vector<vector<int>> account={{1,5},{7,3},{3,5}};
    // rows=account.size();
    // col=account[0].size();
}