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

 Node* findminval(Node* root){
     
    Node*  prev=NULL;

     while(root!=nullptr){
        prev=root;
        root=root->left;
     }

     return prev;
   }
   
Node* deletebst(Node* root, int key){
    
    // base case
     if(root ==NULL){
     return NULL;
    }
       
    // node found to delete
    if(root->data==key){
      
      // 0 child
      if(root->left==nullptr && root->right==nullptr){
        delete root;
        return nullptr;

      }
    //1 child
      else if(root->left!=nullptr && root->right==nullptr){
       Node*temp=root->left;
       delete root;
       return temp;
      }

     else if(root->left==nullptr && root->right!=nullptr){
       Node*temp=root->right;
       delete root;
       return temp;
      }
   
    // 2 child
    else if(root->left!=nullptr && root->right!=nullptr){
     int minm=findminval(root->right)->data;
     root->data=minm;
     root->right=deletebst(root->right,minm);
     return root;
    }

    }

    else if(root->data>key){
    root->left= deletebst(root->left,key);
    return root;
    }

    else{
    root->right= deletebst(root->right,key);
    return root;
    }

    return nullptr;

}


 Node* deleteNode(Node* root, int key) {
       return deletebst(root,key);
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


int main()
{

 cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);
cout<<"enter key to delete\n";
int key;
cin>>key;

 cout<<"level order traversal: ";
levelOrderTraversal(root) ;

root=deleteNode(root,key); 
cout<<"after deleting key\n";
 cout<<"level order traversal: ";
levelOrderTraversal(root) ;

}