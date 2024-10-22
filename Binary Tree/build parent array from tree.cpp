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

node* buildTree(node* root) {

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

void findparent(node* root,unordered_map<int,int>&parent,node* par){

    if(root==NULL){
        return;
    }

    findparent(root->left,parent,root);

    if(par!=NULL){
        parent[root->data]=par->data;
    }
    else
    {
        parent[root->data]=-1;
    }

     findparent(root->right,parent,root);
}

int main() {
  
    node* root = NULL;
    //creating a Tree
    root = buildTree(root);

    unordered_map<int,int>parent;
    node* par=NULL;
    findparent(root,parent,par);

    cout<<"node    parent\n";

    for(auto it:parent){
        cout<<it.first<<"  "<<it.second<<endl;
    }

}