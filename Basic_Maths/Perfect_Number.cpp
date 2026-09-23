#include <bits/stdc++.h>

//check until (n)^1/2
//ex 36 
//we get 1,2,3,4,6 divisor
//know get theanother part and add it also
//1x36, 2x16 ,3x12 , 4x9, 6x6
//remove duplicate and the number itself
#include<iostream>
using namespace std;
bool Perfect_Number(int num) 
{
    int sum=1;
    if(num<=1)  return false;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
            if(i!=num/i)  //checking if the devisor are same if not same then add it
            {
            
                sum+=num/i;
            }
        }
    }
    return sum==num;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int num;
        cin>>num;
        cout<<boolalpha<<Perfect_Number(num);
    }
}

//time limit execeded
// bool Perfect_Number(int num) 
// {
//     int sum=0;
//     for(int i=1;i<num;i++)
//     {
//         if(sum>num)
//         {
//             break;
//         }
//         if(num%i==0)
//         {
//             sum+=i;
//         }
//     }   
//     return sum==num;
// }