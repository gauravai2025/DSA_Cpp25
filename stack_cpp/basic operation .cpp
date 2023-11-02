#include<bits/stdc++.h>
using namespace std;
 
int main()
{
stack<int>s; // stack define of int 
s.push(4);
s.push(0);   // insert element in stack
s.push(9);
s.push(6);
 while(!s.empty()){  // print stack in loop
    cout<<s.top()<<endl;  // access top element
    s.pop();  // remove top element



 }
 
 
    return 0;
}