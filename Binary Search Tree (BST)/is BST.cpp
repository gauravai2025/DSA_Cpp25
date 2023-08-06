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

 bool check(node* root,long int min,long int max){
        if(root==NULL)return true;
        if(root->data  >=min && root->data<=max){
            bool left=check(root->left,min,root->data);
            bool right=check(root->right,root->data,max);
            return left && right;
        }
        return false;
    }
    


bool isValidBST(node* root) {
        if(root==NULL)return true;
        if((root->left==NULL && root->right==NULL))return true;
        return check(root,LONG_MIN,LONG_MAX);
    }


int main() {

    node* root = NULL;
   // example input  1 3 7-1 -1 11 -1 -1  5 17 -1 -1 -1 
    //creating a Tree
    root = buildTree(root);
    if(isValidBST(root))
    cout<<"BST";
    else
     cout<<"NOt BST";
    }