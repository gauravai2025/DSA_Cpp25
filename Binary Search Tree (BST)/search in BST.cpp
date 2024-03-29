#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node *right;

Node(int d){
    this->data=d;
    this->left=NULL;
     this->right=NULL;
}
};
Node* insert_BST(Node* root,int d){
    // base case
    if(root == NULL){
        root=new Node(d);
        return root;
    }
    else if(d>root->data){
        root->right=insert_BST(root->right,d);
    }
    else
        root->left=insert_BST(root->left,d);
return root;

}


Node* input_data(Node* root){
    cout<<"enter data for root node\n";
    int d;
    cin>>d;
    while(d!=-1){
        root=insert_BST(root,d);
        cout<<"enter rest data \n";
        cin>>d;
    }
    return root;
}


 bool search(int d,Node*root){
    // if(root==NULL)
    // return 0;
    Node* temp=root;
 while(temp!=NULL){
    if(temp->data==d)
    return 1;
     if (d>temp->data)
     temp= temp->right;
    else
    temp= root->left;

 }
 return 0;
 }

 bool search_recursive(int value,Node*root){
    // base case
    if(root==NULL)
    return 0;
    if(root->data==value)
     return 1;
     else if(value>root->data)
     return search_recursive(value,root->right);
     else
    return search_recursive(value,root->left);

 }

 
int main()
{

 cout<<"enter data for BST\n";
 Node* root=NULL;
 root=input_data(root);
 cout<<"enter element to search\n";
 int element;
 cin>>element;
 cout<<search(element,root)<<" ";
  cout<<search_recursive(element,root);


    return 0;
}