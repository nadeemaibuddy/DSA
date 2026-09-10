#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ransomNote = "fihjjjjei", magazine = "hjibagacbhadfaefdjaeaebgi";   
    int freq[26]={0},r=0;
    if(ransomNote.size()>magazine.size())
    {
        r=0;
    }
    else{
        for(int i=0;i<magazine.size();i++)
        {
            if(i<ransomNote.size())
            {
            freq[ransomNote[i]-'a']++;
            }
            freq[magazine[i]-'a']--;
        }
        // for(int i=0;i<ransomNote.size();i++)
        // {
        //     cout<<freq[ransomNote[i]-'a'];
        // }
    
        for(int i=0;i<ransomNote.size();i++)
        {
            if(freq[ransomNote[i]-'a']<=0)
            {
                r=1;
            }
            else if(freq[ransomNote[i]-'a']>0)
            {
                r=0;
                break;
            }
        }
    }
    cout<<r;
}




















// string ransomNote = "abc", magazine = "cbad";
// int freq[26]={0},r;
// for(int i=0;i<ransomNote.size();i++)
// {
    
//     freq[ransomNote[i]-'a']++;
//     freq[magazine[i]-'a']--;
// }

// // for(int i=0;i<ransomNote.size();i++)
// // {
// //     cout<<freq[ransomNote[i]-'a'];
// // }


// for(int i;i<ransomNote.size();i++)
// {
//     if(freq[ransomNote[i]-'a']==0)
//     {
//         r=1;
//     }
//     else if(freq[ransomNote[i]-'a']!=0){
//         r=0;
//         break;
//     }
// }
// cout<<r;