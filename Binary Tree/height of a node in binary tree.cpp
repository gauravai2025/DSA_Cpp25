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

void heightofnode(node* root,int &height,int hgt,int data) {

    if(root==NULL)
    return 0;

    heightofnode(root->left,height,hgt+1,data);
    if(root->data==data)
    height=hgt;
    heightofnode(root->right,height,hgt+1,data);

}

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



int main() {

    node* root = NULL;
   // example input  1 3 7-1 -1 11 -1 -1  5 17 -1 -1 -1 
    //creating a Tree
    root = buildTree(root);
    int height=0;
    int data;
    cout<<"Enter the data of node whose height you want to find: ";
    cin>>data;
    heightofnode(root,height,0,data);
    cout<<"height of tree:  ";
    cout<<height;

    }