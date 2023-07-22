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
    if(root==NULL)
    return 0;
    Node* temp=root;
 while(temp!=NULL){
    if(root->data==d)
    return 1;
    else if (d>root->data)
    {
        return root->right;
        
    }
    else
    return root->left;

 }
 return 0;
 }
 
int main()
{

 cout<<"enter data for BST\n";
 Node* root=NULL;
 root=input_data(root);
 cout<<"enter element to search\n";
 int ele;
 cin>>ele;
 cout<<search(ele,root);
    return 0;
}