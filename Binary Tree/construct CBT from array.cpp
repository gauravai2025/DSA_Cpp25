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
    root->left = constructTree(arr, 2 * i + 1, n);
    root->right = constructTree(arr, 2 * i + 2, n);

    return root;
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

Node* root = constructTree(arr, 0, size);
 
 
 
    return 0;
}