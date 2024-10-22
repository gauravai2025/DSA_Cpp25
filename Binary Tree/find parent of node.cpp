#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void findparent(node* root, node*&parent,node* par,int node){

    if(root==NULL){
        return;
    }

    findparent(root->left,parent,root,node);

    if(root->data==node)
    parent=par;

     findparent(root->right,parent,root,node);
}

int main() {
  
    node* root = NULL;
    //creating a Tree
    root = buildTree(root);
    
    int val;
    cout<<"enter node to find parent: \n";
    cin>>val;
    node* parent=NULL;

    findparent(root,parent,nullptr,val);

    if(parent==NULL){
        cout<<"parent not found\n";
    }
    else
    {
        cout<<"parent of "<<val<<" is "<<parent->data<<endl;
    }
}