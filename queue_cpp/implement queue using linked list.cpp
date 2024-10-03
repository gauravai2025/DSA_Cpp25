#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor

    Node(int val){
     data=val;
     next=nullptr;
    }
};


// time and space complexity of all operation is O(1)
// class of queue 
class Queue{

    public:
   Node* front;
   Node* rear;
   int cnt;

    // cnstructor
    Queue(){
    front=nullptr;
    rear=nullptr;
    cnt=0;

    }

    void enqueue(int x){  // push / insert

     Node* newnode=new Node(x);

     if(rear==nullptr){
        front=newnode;
        rear=newnode;
     }

     else{
    rear->next=newnode;
    rear=rear->next;
     }

      cnt++;
 }
    

    void dequeue(){ // remove /pop
           
    // check queue is empty
    if(front ==nullptr){
        cout<<"queue is empty\n";
        return ;
    }

    else{
    Node* temp=front;
    front=front->next;
    delete temp;
    
    // if queue is empty start from 0th index
    if(front==nullptr){
    front=nullptr;
    rear=nullptr;
    }

    cnt--;

    }

    }

    int peakfront(){ 

     // queue is empty
        if(front==nullptr){
            cout<<"queue is empty\n";
            return -1;
        }

        else{
          return front->data;  
        }
    }

    bool isempty(){

        if(front==nullptr)
        return 1;
        else
        return 0;
    }

int queuesize(){

    return cnt;
}



};
 
int main()
{

Queue q;

q.enqueue(7);
q.enqueue(18);

cout<<"front element of queue: "<<q.peakfront()<<endl;
q.dequeue();
 cout<<"front element of queue: "<<q.peakfront()<<endl;

cout<<"size of queue: "<<q.queuesize()<<endl;

q.dequeue();

if(q.isempty())
cout<<"queue is empty\n";
else
cout<<"queue is not empty\n";
 
  cout<<"front element of queue: "<<q.peakfront()<<endl;

    return 0;
}