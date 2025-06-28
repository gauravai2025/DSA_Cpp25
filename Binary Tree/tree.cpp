#include<iostream>
#include<queue>
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

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void reverseinorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    reverseinorder(root->right);
    reverseinorder(root->left);
    cout << root-> data << " ";

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void reversepreorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    reversepreorder(root->right);
    reversepreorder(root->left);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

void reversepostorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }
      
    reversepostorder(root->right);
    reversepostorder(root->left);
    cout << root-> data << " ";

}

void inorderiterative(node* root,vector<int>&ans){

  stack<TreeNode*>st;
  node* currnode=root;

  while(true){

   if(currnode!=nullptr){
    st.push(currnode);
    currnode=currnode->left;

    }

    else{

    if(st.empty())
     return ;

    node* top=st.top();
    st.pop();

    cut<<top->val<<" ";
    currnode=top->right;

    }

   }

   }

   void preorderiterative(TreeNode* root,vector<int>&ans) {


  stack<TreeNode*>st;
  TreeNode* currnode=root;

  while(true){

   if(currnode!=nullptr){

    st.push(currnode);
    ans.push_back(currnode->val);
    currnode=currnode->left;

    }

    else{

    if(st.empty())
     return ;

    TreeNode* top=st.top();
    st.pop();

    currnode=top->right;

    }

   }

   }



int main() {

    node* root = NULL;
    
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order

    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);

    cout<<endl<< "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 

    cout<<endl<< "reverseinorder traversal is:  ";
    reverseinorder(root); 

    cout << endl << "reversepreorder traversal is:  ";
    reversepreorder(root); 

    cout << endl << "reversepostorder traversal is:  ";
    reversepostorder(root); 
    
    cout << endl << "iterative inorder traversal is:  ";
    inorderiterative(root); 

    cout << endl << "iterative preorder traversal is:  ";
    preorderiterative(root); 
    
    return 0;
}