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


  bool isSameTree(node* p, node* q) {
        if(p== NULL && q==NULL)
        return true;
        if(p==NULL && q!=NULL)
        return false;
         if(p!=NULL && q==NULL)
        return false;
      bool left=  isSameTree(p->left,q->left);
bool right=isSameTree(p->right,q->right);
    bool flag=(p->data==q->data);
        if(left && right && flag)
        return 1;
        else
        return false;

    }


int main() {

    node* root1 = NULL;
   // example input  1 3 7-1 -1 11 -1 -1  5 17 -1 -1 -1 
    //creating a Tree
    root1 = buildTree(root1);
    
    node* root2 = NULL;
   // example input  1 3 7-1 -1 11 -1 -1  5 17 -1 -1 -1 
    //creating a Tree
    root2 = buildTree(root2);
    if(isSameTree(root1,root2))
    cout<<"same tree\n";
    else
    cout<<"not same tree\n";

    }