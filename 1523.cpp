//my solution 
// #include<iostream>
// using namespace std;
// int main(){
//     int low=3,high=7;
//     int count=0;
//     for(int i=low;i<=7;i++)
//     {
//         if(i%2!=0)
//         {
//             count++;
//         }
//     }
//     cout<<count;
// }

//optimal solution
#include<iostream>
using namespace std;
int main()
{
    int low=3,high=7;
    cout<<((high+1)/2 -(low/2))<<endl;
}
