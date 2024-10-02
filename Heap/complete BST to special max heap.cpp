#include<bits/stdc++.h>
using namespace std;

// special max heap is a complete binary tree which satisfies the max heap property and values of left subtree are less than the value of  right subtree and the value of root node is greater than the value of left and right subtree.

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

 
   void postorder_populating(node* root, int &idx,vector<int>&nodeval){
        
        if(root==nullptr)
        return ;
        
        postorder_populating(root->left,idx,nodeval);
        postorder_populating(root->right,idx,nodeval);
        root->data=nodeval[idx];
        idx++;
    }
    
    void inorder(node* root, vector<int>&nodeval){
        
        if(root==nullptr)
        return ;
        
        inorder(root->left,nodeval);
        nodeval.push_back(root->data);
        inorder(root->right,nodeval);
    }

      void convertTospecialMaxHeap(node* root)
    {
        vector<int>nodeval;
        
        inorder(root,nodeval);
        int idx=0;
        postorder_populating(root,idx,nodeval);
        
        
    }
    

    void levelorder_print(node* root){
        
        if(root==nullptr)
        return ;
        
        queue<node*>q;
        q.push(root);
        
        while(!q.empty()){
            
        node* frontnode=q.front();
        q.pop();
        
        cout<<frontnode->data<<" ";
           
            
            if(frontnode->left)
            q.push(frontnode->left);
            
            if(frontnode->right)
            q.push(frontnode->right);
            
        }
        
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

int main()
{
     node* root = NULL;
    
    //creating a Tree
    root = buildTree(root);

   convertTospecialMaxHeap(root);
  cout<<"Level order traversal of the tree after converting to special max heap is: ";

   levelorder_print(root);
 
    return 0;
}