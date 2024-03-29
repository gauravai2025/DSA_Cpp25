#include<bits/stdc++.h>
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


int max_hgt(node*root){
    if(root == NULL)
    return 0;
    int left=max_hgt(root->left);
    int right =max_hgt(root->right);
    return 1+max(left,right);

}

    bool isBalanced(node* root) {
        if(root==NULL)
        return 1;
  int left=isBalanced(root->left);
    int right=isBalanced(root->right);
        if(left && right &&abs(max_hgt(root->left)-max_hgt(root->right))<=1)
        return 1;
        else
        return 0;
      
    }

 
int main()
{
   node* root = NULL;
   // example input  1 3 7-1 -1 11 -1 -1  5 17 -1 -1 -1 
    //creating a Tree
    root = buildTree(root);
 if(isBalanced(root))
 cout<<"balanced tree\n";
    else
    cout<<"not balanced tree\n";
 
 
    return 0;
}