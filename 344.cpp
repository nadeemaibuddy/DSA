#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // optimal
    vector<char>s={'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
    int left=0;
    int right=s.size()-1;
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    
    
    



    
    
    // vector<char>s={'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'},rs=s;
    // for(int i=0;i<s.size();i++)
    // {               
        //         s[i]=rs[s.size()-i-1];
        
    // }
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<i<<" : "<<rs[i]<<" : "<<s.size()-i-1<<" : "<<s[i]<<endl;
    // }
    // cout<<" "<<endl;
    
    
    
    // vector<char>s={'h','e','l','l','o'},rs;
    // for(int i=0;i<s.size();i++)
    // {
        //     rs.push_back(s[i]);
        //     if(i<=(s.size()/2))
        //     {
            //         s[i]=rs[s.size()-i-1];
            //     }
            //     else{
                //         s[i]=rs[s.size()-i-1];
            //     }
            
            // }
            // }
            
            
            
            // cout<<s.size()/2;
        // for(int i=0;i<s.size();i++)
        // {
            //     cout<<i<<"  "<<s.size()-i-1<<endl;
            // }
        }
      
        

        
// 0 : A : 29 : a
// 1 :   : 28 : m
// 2 : m : 27 : a
// 3 : a : 26 : n
// 4 : n : 25 : a
// 5 : , : 24 : P
// 6 :   : 23 :  
// 7 : a : 22 : :
// 8 :   : 21 : l
// 9 : p : 20 : a
// 10 : l : 19 : n
// 11 : a : 18 : a
// 12 : n : 17 : c



// 13 : , : 16 :         13 : , : 16 :
// 14 :   : 15 : a       14 :   : 15 : a
// 15 : a : 14 : a       15 : a : 14 :
// 16 :   : 13 : ,       16 :   : 13 : ,



// 17 : c : 12 : n
// 18 : a : 11 : a
// 19 : n : 10 : l
// 20 : a : 9 : p
// 21 : l : 8 :  
// 22 : : : 7 : a
// 23 :   : 6 :  
// 24 : P : 5 : ,
// 25 : a : 4 : n
// 26 : n : 3 : a
// 27 : a : 2 : m
// 28 : m : 1 :  
// 29 : a : 0 : A