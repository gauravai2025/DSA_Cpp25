#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    // constructor
    ListNode(int data){
        val=data;
        next=NULL;
    }
};

 ListNode* insertionSortList(ListNode* head) {

     if(head==NULL || head->next==NULL)
     return head;  

     ListNode* curr=head->next;

     while(curr!=nullptr){
     ListNode* prevcurr=head;

     while(prevcurr!=nullptr && prevcurr->val<curr->val){
        prevcurr=prevcurr->next;
     }  
      
      int currval=prevcurr->val;
      prevcurr->val=curr->val;

      if(curr!=prevcurr)
      prevcurr=prevcurr->next;

     while(prevcurr!=curr){
     int currn=prevcurr->val;
     prevcurr->val= currval;
     currval=currn;
      prevcurr=prevcurr->next;
     }
    
     prevcurr->val= currval;

     curr=curr->next;
     }

     return head;


    }
 
int main()
{

int size;
cout<< "Enter the size of linked list:\n ";
cin>>size;

ListNode* headdummy=new ListNode(0);
ListNode* temp=headdummy;

cout<<"Enter the elements of linked list: \n";
for(int i=0;i<size;i++){
    int val;
    cin>>val;
    ListNode* newnode=new ListNode(val);
    temp->next=newnode;
    temp=temp->next;
}

ListNode* head=headdummy->next;

ListNode* res=insertionSortList(head);

cout<<"Sorted linked list is:\n ";

while(res!=nullptr){
    cout<<res->val<<" ";
    res=res->next;
}
    return 0;
}