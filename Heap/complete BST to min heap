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

 void levelorder(node* root,int idx, vector<int>&nodeval){
        
        if(root==nullptr)
        return ;
        
        queue<node*>q;
        q.push(root);
        
        while(!q.empty()){
            
            node* frontnode=q.front();
            q.pop();
            
            frontnode->data=nodeval[idx];
            idx++;
            
            if(frontnode->left)
            q.push(frontnode->left);
            
            if(frontnode->right)
            q.push(frontnode->right);
            
        }
        
    }
    
    
    void inorder(node* root, vector<int>&nodeval){
        
        if(root==nullptr)
        return ;
        
          inorder(root->left,nodeval);
        nodeval.push_back(root->data);
        inorder(root->right,nodeval);

       
        
    }

      void convertToMaxHeap(node* root)
    {
        vector<int>nodeval;
        
        inorder(root,nodeval);
        
        levelorder(root,0,nodeval);
        
        
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

 
int main()
{
     node* root = NULL;
    
    //creating a Tree
    root = buildTree(root);

   convertToMaxHeap(root);
  cout<<"Level order traversal of the tree after converting to min heap is: ";
   levelorder_print(root);
 
 
 
    return 0;
}