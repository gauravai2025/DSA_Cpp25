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

void kthlargest(Node* root,int &k,int &ans){
            if(root==NULL)
            return ;

            kthlargest(root->right,k,ans);
            k--;
            if(k==0)
            ans=root->data;
            
            kthlargest(root->left,k,ans);
           
           
}


int main()
{
cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);

cout<<"enter value of k\n";
int k;
cin>>k;
int ans=0;

int kt=k;

kthlargest(root,k,ans);
cout<<kt<<"th largest element: "<<ans<<"\n";
    return 0;
}