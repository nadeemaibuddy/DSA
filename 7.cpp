#include<iostream>
#include<cmath>
using namespace std;
int rev1(int x)
    {
        int n=x,r;
        int rev=0;
        while(n!=0)                 
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;   
        }
        return rev;
    }
    
int main()
{
    int n=901000,b=n,p=0,rev;
    while(b%10==0)                  //for test cases like 120,1900,90100(pahala)[for counting trailing zeros]
    {     
        p++;
        b=b/10;
    }
    rev=rev1(n);
    
    if(n==rev1(rev)||(n==rev1(rev)*pow(10,p)))      //for normal values
    {
        cout<<rev<<endl;
    }
    else{                                   //if integer overflow
        rev=0;
        cout<<rev;
    }
}

/*
pahala test cases jaisa 90100,120 ka vasta last ma kitna zeros ha usku malum kar na ka vasta
kyu ki agar vo number ku reverse kara to 109,21 aata to usku vapas reverse kara to 901,12 aata original value nahi aati

dusara normal test case ka vas ta or pahala case ka vas ta bhi.

3sra agar number ouut of range chalagaya to usku handel kar na ka vasta
*/