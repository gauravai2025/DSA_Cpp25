#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
 

  Node* constructLinkedMatrix(vector<vector<int>>& mat) {
   
        int row=mat.size();
        vector<Node*>prev;
        
        Node* dummy=new Node(-1);
        Node* curr=dummy;
        
        for(int i=0;i<row;i++){
            curr->right=new Node(mat[0][i]);
            curr=curr->right;
            prev.push_back(curr);
        }
        
         
        for(int i=1;i<row;i++){
             curr=nullptr;
           for(int j=0;j<row;j++){
               
             Node* temp=new Node(mat[i][j]);
               
               if(curr==nullptr)
               curr=temp;
               
               else{
               curr->right=temp;
               curr=curr->right;
               }
               
               prev[j]->down=temp;
               prev[j]=temp;
           }
        }
        
        Node* head=dummy->right;
        
        return head;

  }

int main()
{

int size;
cin>>size;
 
 vector<vector<int>>mat(size,vector<int>(size));

 for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cin>>mat[i][j];
    }
 }
 
 Node* head=constructLinkedMatrix(mat);

 // printing linked list in matrix form

 Node* curr=head;

 while(curr!=nullptr){

    Node* currdown=curr->down;

    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->right;
    }

    cout<<endl;
    curr=currdown;

 }
 
    return 0;
}