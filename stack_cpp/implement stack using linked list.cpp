#include<bits/stdc++.h>
using namespace std;
 
 // implement stack using linked list
 // time complexity of all operation is O(1)
    // space complexity is O(1) for all operation
// define a class node

 class Node{
    public:
    int data;
    Node* next;
 
 // constructor
    Node(int val){
        data=val;
        next=NULL;
    }

 };


// define a class stacklist
 class stacklist{
    public:
    Node* head;
    int cnt;

    // constructor
    stacklist(){
        head=nullptr;
        cnt=0;
    }

    void insert(int val){
        Node* newnode= new Node(val);
        newnode->next=head;
        head=newnode;
        cnt++;
    }

    void remove(){

        if(head!=nullptr){
           Node* temp=head;
            head=head->next;
            delete temp;
          cnt--;
        }

        else{
            cout<<"stack is empty()\n";
        }
    }


    int peak(){

        if(head==nullptr){
            return -1;
        }
        else{
            return head->data;
        }
    }

    bool isempty(){
      return head==nullptr;
    }

    int stacksize(){
        return cnt;
    }

 };

int main()
{

stacklist stl;

stl.insert(1);
stl.insert(2);
stl.remove();
cout<<stl.peak()<<endl;

if(stl.isempty())
cout<<"stack is empty()\n";
else
cout<<"stack is not empty()\n";

cout<<"size of stack is: "<<stl.stacksize()<<endl;
 
 
 
    return 0;
}