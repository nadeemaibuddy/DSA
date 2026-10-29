// try similar problems on leetcode
// 1952. Three Divisors
// 1390. Four Divisors
// 2427. Number of Common Factors

#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void divisor(int n)
{
    vector<int> s,l;
    //O(sqrt(n))
    for(int i=1;i*i<=n;i++)           //for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            s.push_back(i);
            if(i!=n/i)
            {
                s.push_back(n/i);
            }
        }
    }
    //O(n * log n)
    sort(s.begin(),s.end());
    //or
    // reverse(l.begin(),l.end());
    // s.insert(s.end(),l.begin(),l.end());
    // O(n)
    for(int c:s)
    {
        cout<<c;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        divisor(n);
    }
}


//O(n)
// void divisor(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }