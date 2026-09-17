#include<iostream>
#include<string>
using namespace std;
int main()
{
    string jewels = "aA", stones = "aAAbbbb";
int count=0;
int freq[26]={0},freq2[26]={0};
for(int i=0;i<jewels.size();i++)
{
    if(jewels[i]-'a' >=0 && jewels[i]-'a'<26)
    {
    freq[jewels[i]-'a']++;
    }
    else if(jewels[i]-'A'>=0 && jewels[i]-'A'<26)
    {
    freq2[jewels[i]-'A']++;
    }
}
for(int i=0;i<stones.size();i++)
{
    if(stones[i]-'a' >=0 && stones[i]-'a'<26)
    {
    if(freq[stones[i]-'a']>0)
    {
        count++;
    }
    }
    else if(stones[i]-'A'>=0 && stones[i]-'A'<26)
    {
    if(freq2[stones[i]-'A']>0)
    {
        count++;
    }
    }
}







    // for(int i=0;i<jewels.size();i++)
    // {                                                         //o(m X n)
    //     for(int j=0;j<stones.size();j++)
    //     {
    //         if(jewels[i]==stones[j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    cout<<count;
}






// for(char ch:jewels)
// {
//     for(char ch1:stones)
//     {
//         if(ch==ch1)
//         {
//             count++;
//         }
//     }
// }