#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node *right;


Node(int d){
    this->data=d;
    this->left=NULL;
     this->right=NULL;
}
};
Node* insert_BST(Node* root,int d){
    // base case
    if(root == NULL){
        root=new Node(d);
        return root;
    }
    else if(d>root->data){
        root->right=insert_BST(root->right,d);
    }
    else
        root->left=insert_BST(root->left,d);
return root;

}
Node* input_data(Node* root){
    cout<<"enter data for root node\n";
    int d;
    cin>>d;
    while(d!=-1){
        root=insert_BST(root,d);
        cout<<"enter rest data \n";
        cin>>d;
    }
    return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
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



void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}



 
int main()
{

 cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);

 cout<<"level order traversal\n";
levelOrderTraversal(root) ;

cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    
 
    return 0;
}