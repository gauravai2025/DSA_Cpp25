#include<bits/stdc++.h>
using namespace std;

// time and space complexity of all operation is O(1)
// class of queue 
class Queue{

    public:
    int front;
    int rear;
    int *arr;
    int size;

    // cnstructor
    Queue(int size){

    this->size=size;
    arr=new int [size];
    front=0;
    rear=0;

    }

    void enqueue(int x){  // push / insert

        // check queue is full

        if(rear==size){
            cout<<"queue is full\n";
            return ;
        }

        else{
        arr[rear]=x;
        rear++; 
        }
    }

    void dequeue(){ // remove /pop
           
    // check queue is empty
    if(front==rear){
        cout<<"queue is empty\n";
        return ;
    }

    else{
        arr[front]=-1;
       front++; 
      
      // if queue is empty start from 0th index

      if(front==rear){
        front=0;
        rear=0;
      }

    }

    }

    int peakfront(){

     // queue is empty
        if(front==rear){
            cout<<"queue is empty\n";
            return -1;
        }

        else{
          return arr[front];  
        }
    }

    bool isempty(){

        if(front==rear)
        return 1;
        else
        return 0;
    }

int queuesize(){

    return rear-front;
}



};
 
int main()
{

Queue q(5);

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
 
 
    return 0;
}