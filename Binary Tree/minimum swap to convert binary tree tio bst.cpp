#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* left;
    Node* right;
   
   // Constructor
    Node(int value) {
    data=value;
    left=nullptr;
    right=nullptr; 

    }
};


    // Recursive function to construct the binary tree from the array
Node* constructTree(const vector<int>& arr, int i, int n) {
    // Base case: If index is out of bounds, return nullptr
    if (i >= n) {
        return nullptr;
    }

    // Create the current node
    Node* root = new Node(arr[i]);

    // Recursively construct the left and right subtrees
    root->left = constructTree(arr, 2 * i + 1, n);  // follow property of complete binary tree
    root->right = constructTree(arr, 2 * i + 2, n);

    return root;
}

// Function to perform inorder traversal of the binary tree
void inorderTraversal(Node* root,vector<int>&node) {
    
    if (root == nullptr) {
        return;
    }
    
    inorderTraversal(root->left,node);
    
    node.push_back(root->data);
    
    inorderTraversal(root->right,node);
}
 

  int minSwaps(vector<int>&arr, int n){
      
        Node* root=constructTree(arr,0,n);
        vector<int>node;
        
        inorderTraversal(root,node);
        
        sort(arr.begin(),arr.end());
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        
        int cnt=0;
        
        for(int i=0;i<n;i++){
            
            while(mp[node[i]]!=i){
             int idx=mp[node[i]];
             swap(node[i],node[idx]);
             cnt++;
             
            }
        }

        cout<<"inorder traversal of binary search tree\n";

        for(auto it:node){
            cout<<it<<" ";
        }
        cout<<endl;
        
        return cnt;
       
        
    }


int main()
{

int size;
cout<<"enter size of array\n";
cin>>size;

vector<int>arr(size);
cout<<"array element \n";

for(int i=0;i<size;i++){
    cin>>arr[i];
}
 
 cout<<"minimum swaps required to convert bst: "<<minSwaps(arr,size);
 

    return 0;
}