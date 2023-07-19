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


int  max_hgt(node* root) {
    int ans=0;
    if(root==NULL)
    return ans;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    ans++;

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            ans++;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
    return ans-1;

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
    cout<<"height of tree: ";
    cout<<max_hgt(root);

    }