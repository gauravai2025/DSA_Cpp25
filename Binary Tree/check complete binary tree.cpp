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


int count_node(node* root){
    if(root==NULL)
    return 0;
    return 1+count_node(root->left)+count_node(root->right);

}


bool isCBT(node*root,int index,int cnt){
    if(root==NULL)
    return true;

    if(index>=cnt)
    return false;

    bool left=isCBT(root->left,2*index+1,cnt);
    bool right=isCBT(root->right,2*index+2,cnt);
        return left && right;


}
    bool isCompleteTree(node* root) {
     int cnt= count_node(root);
    return isCBT(root,0,cnt);

    }


 
int main()
{

  node* root = NULL;
   // example input complete binary tree  1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
    //creating a Tree
    root = buildTree(root);
    if(isCompleteTree(root))
    cout<<"complete binary tree\n";
    else
    cout<<"not complete binary tree\n";

    return 0;
}