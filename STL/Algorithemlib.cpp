#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
#include<utility>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int>p2)    //comparator
    {
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;   //swap it self for correct order
        //means they are same

        if(p1.first<p2.first) return true;    
        return false;    //swap;
    }
int main()
{
    vector<int> n={4,1,7,2,8};
    int arr[]={6,7,2,9};
    string s1="dcba";

    //ascending order
    sort(arr,arr+4);     //for array
    sort(s1.begin(),s1.end());  //for vectors or any other container 
    sort(arr+2,arr+4); //some portion of array
    cout<<s1<<"  "<<endl;  

    //decending order
    sort(arr,arr+4,greater<int>());
    for(auto i:arr)
    {
        cout<<i;
    }

    //own way (combine both)

    pair<int,int> arr1[] ={{1,2},{2,2},{3,4}};
    //sort in  ascending order according to second element
    //if second element are equal then sort
    //it in decending order by comparing first element



    int n1=7;
    int count=__builtin_popcount(n1);   //return no.of set bits(1) in the binary form of the number 7=111  so count =3

    long long n2=1249832751028;
    int countl=__builtin_popcountll(n2);


    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));  

    //max or min of two numbers
    int c=max(2,3);
    int d=min(3,2);
    
    //max or min in array
    int x=*max_element(arr,arr+4);
    cout<<x;


    

}