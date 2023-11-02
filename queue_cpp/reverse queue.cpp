#include<bits/stdc++.h>
using namespace std;
 
 void reverse(queue < int > & q) {
    // Write your code here.
    stack<int>st;
    int n= q.size();
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

int main()
{

 
 
 
    return 0;
}