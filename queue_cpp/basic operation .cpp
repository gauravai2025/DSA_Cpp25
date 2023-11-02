#include<bits/stdc++.h>
using namespace std;
 
int main()
{
queue<int>q;
// queue define of int 
q.push(4);
q.push(0);   // insert element in queue from end
q.push(9);
q.push(6);
// queue traverse from front to back
 while(!q.empty()){  // print queue in loop
    cout<<q.front()<<endl;  // access top element in queue from front 
    q.pop();  // remove top element from queue front



 }
 
 
    return 0;
}
 
 
 
