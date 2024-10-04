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
class circularQueue{

    public:
   Node* front;
   Node* rear;
   int cnt;

    // cnstructor
    circularQueue(){
    front=nullptr;
    rear=nullptr;
    cnt=0;

    }

    void enqueue(int x){  // push / insert

     Node* newnode=new Node(x);

     if(rear==nullptr){ // first element insert
        front=newnode;
        rear=newnode;
        rear->next=front;
     }

     else{
    rear->next=newnode;
    rear=rear->next;
    rear->next=front;
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
   
        if (front == rear) {  // Only one element in the queue
            delete front;
            front = rear = nullptr;
        } 
        
        else {
            Node* temp = front;
            front = front->next;
            rear->next = front;  // Maintain circular nature
            delete temp;
        }
        cnt--;

    }

    }

    int peakfront(){ 

     // queue is empty
        if(front==nullptr){
            // cout<<"queue is empty\n";
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


     int rearvalue() {
        if(rear==nullptr)
        return -1;
        else
        return rear->data;
    }

};
 
int main()
{

circularQueue q;

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

cout<<"rear element of queue: "<<q.rearvalue()<<endl;

    return 0;
}