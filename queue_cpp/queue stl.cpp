#include<iostream>
#include<queue>
using namespace std;

int main(){
    
queue<string>q;

cout<<"size of queue "<<q.size()<<endl;

q.push("gaurav");
q.push("adarsh");
q.push("rohit");

cout<<"size of queue "<<q.size()<<endl;
cout<<"first element "<<q.front()<<endl;
cout<<"last element "<<q.back()<<endl;

q.pop();

cout<<"size of queue "<<q.size()<<endl;
cout<<"first element "<<q.front()<<endl;
cout<<"empty or not "<<q.empty()<<endl;

queue<int>qi;
// queue define of int 
qi.push(4);
qi.push(0);   // insert element in queue from end
qi.push(9);
qi.push(6);

// // print all element in queue
// for(auto i:qi){  // not work in queue
//     cout<<i<<" ";
// }

// cout<<qi[0]<<endl; // not work in queue

// queue traverse from front to back
 while(!qi.empty()){  // print queue in loop
    cout<<qi.front()<<" ";  // access top element in queue from front 
    qi.pop();  // remove top element from queue front

 }

return 0;
}


