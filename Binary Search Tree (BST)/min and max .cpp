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

// int find_min(Node*root){
//     if(root==NULL)
//     return -1;

// if(root->left==NULL)
// return root->data;

// return root->left;
    
// }
 
 int find_min(Node*root){
    if(root==NULL)
    return -1;
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
 }
 
  int find_max(Node*root){
    if(root==NULL)
    return -1;
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
 }

 
int main()
{

 cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);
  cout<<"min element in BST is "<<find_min(root)<<endl;
    cout<<"max element in BST is "<<find_max(root)<<endl;
 
    return 0;
}