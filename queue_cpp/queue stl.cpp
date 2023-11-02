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
return 0;
}


