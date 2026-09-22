//stack  - LIFO 
//three main operation push ,pop, top.
//all operation takes O(1)


#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);   //push the elements in to the stack
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    st.top();   //just return the top(last elements pushed in to stack)

    st.pop()  //delete the top element

    stack<int> st1;
    st.swap(st)1;

    st.size();
    st.empty(); //returns true if empty else false

}