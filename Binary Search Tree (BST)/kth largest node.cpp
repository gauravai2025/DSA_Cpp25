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


   
    void cnt_nd(Node* root,int &cnt){
            if(root==NULL)
            return ;
            cnt_nd(root->left,cnt);
            cnt++;
            cnt_nd(root->right,cnt);

}


void kthlargest(Node* root,int k,int &ans,int &totlnd,int &cnt){
          
            if(root==NULL)
            return ;
            kthlargest(root->left,k,ans,totlnd,cnt);
            cnt++;
            if(cnt==totlnd+1-k)
            ans=root->data;
            kthlargest(root->right,k,ans,totlnd,cnt);

}




     int kthLargest(Node *root, int k)
    {
        int ans=0;
        int totlnd=0;
        cnt_nd(root,totlnd);
        int cnt=0;
        
        kthlargest(root,k,ans,totlnd,cnt);
        return ans;   
    }

int main()
{
cout<<"enter data for BST\n";
 Node* root=NULL;
 root =input_data(root);
cout<<"enter value of k\n";
int k;
cin>>k;
cout<<k<<"th largest element: "<<kthLargest(root,k)<<"\n";
    return 0;
}