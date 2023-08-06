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

void inorder(Node* root,vector<int>&ans){
            if(root==NULL)
            return ;
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);

}



    int kthlargest(Node* root, int k) {
        vector<int>ans;
        inorder(root,ans);
        int size=ans.size();
        return ans[size-k];
    }

int main()
{
    cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);
cout<<"enter value of k\n";
int k;
cin>>k;
cout<<"kth largest element: "<<kthlargest(root,k)<<"\n";
    return 0;
}