#include<bits/stdc++.h>
using namespace std;

// given a doubly-linked list and a key 'k'.
// Delete all the nodes having data equal to k.

 //Definition of doubly linked list:
 
 class Node {
 public:
      int data;
       Node *prev;
       Node *next;
  
       Node() {
           this->data = 0;
           this->prev = NULL;
           this->next = NULL;
       }
  
       Node(int data) {
           this->data = data;
           this->prev = NULL;
           this->next = NULL;
       }
  
     Node (int data, Node *next, Node *prev){
           this->data = data;
           this->prev = prev;
           this->next = next;
       }
  };
 
Node * deleteAllOccurrences(Node* head, int k) {
   Node* dummy=new Node(-1);
   Node* curr=dummy;
   Node* temp=head;

   while(temp!=nullptr){

      if(temp->data!=k){
        curr->next=temp;
        curr->next->prev=curr;
        curr=curr->next;  
      } 

      temp=temp->next;
   }

   curr->next=nullptr;
   head=dummy->next;
   head->prev=nullptr;
   delete dummy; // Free the dummy node
    return head;
}

 
int main()
{
   int size;
   cout << "Enter size of linked list: ";
    cin >> size;
    Node* head = nullptr;
     Node* curr= nullptr;
  cout<< "Enter elements of linked list: ";

    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            curr= newNode;
        } 
        else {
        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
        }
    }
    cout << "Enter key to delete all occurrences: ";
    int key;
    cin >> key;

    head=deleteAllOccurrences(head, key);

    cout<< "Linked list after deletion: ";
    curr = head;

    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}