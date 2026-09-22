#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="nadeem";
    string name2="nadeem";
    string s2("uddin");
    string s3,s4;
    cout<<name<<s2<<endl;

    // a-z  :97-122
    // A-Z  :65-90
    // 0-9  :48-57

    // compare              
    if(name==name2)
    {
        cout<<"equal";
    }
    // or we can use s.compare(s1)
    // which gives 0 if equal
    // if s<s1 then <0
    //if s>s1 then >0


    // cin>>s3;                         for a word
    // getline(cin,s4);                    //for a sentence which has spaces   
    // cout<<s3<<s4;

    
    cout<<name.length()<<endl;   //both are same
    cout<<name.size()<<endl;


    //concatination  or append   //strcat
    cout<<name+s2<<endl;


    //push_back   add one char at end
    s2.push_back('s');

    //pop_back   remove last char
    s2.pop_back();


    //empty check 
    cout<<s3.empty<<endl();

    //clear string
    name.clear();

    // substring
    s2.substr(1,4);

    // find
    cout<<s2.find();

    //erase
    s2.erase(3,2);

    //insert 
    s2.insert(5,"hello");



}