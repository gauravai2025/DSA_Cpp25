#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
   
    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    } 
};

TreeNode* insert_BST(TreeNode* root,int d){
    // base case
    if(root == NULL){
        root=new TreeNode(d);
        return root;
    }
    else if(d>root->val){
        root->right=insert_BST(root->right,d);
    }
    else
        root->left=insert_BST(root->left,d);
return root;

}

TreeNode* input_data(TreeNode* root){

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


// Function to calculate and store the subtree size for each node
int calculateSubtreeSize(TreeNode* node) {
    if (node == nullptr)
     return 0;

    // Calculate sizes of left and right subtrees
    int leftSize = calculateSubtreeSize(node->left);
    int rightSize = calculateSubtreeSize(node->right);

    // Current node's subtree size = left subtree size + right subtree size + 1 (itself)
    node->val = leftSize + rightSize + 1;
    return node->val;
}

// Function to replace each node's value with the size of its left subtree
void replaceWithLeftSubtreeSize(TreeNode* node) {
    if (node == nullptr) return;

    // If the node has a left child, set its value to the left subtree size
    node->val = (node->left != nullptr) ? node->left->val : 0;

    // Recursively process left and right subtrees
    replaceWithLeftSubtreeSize(node->left);
    replaceWithLeftSubtreeSize(node->right);
}

// Helper function to print the tree in-order
void printInOrder(TreeNode* node) {
    if (node == nullptr) return;
    printInOrder(node->left);
    cout << node->val << " ";
    printInOrder(node->right);
}

int main() {
 
   TreeNode* root = NULL;
    root = input_data(root);
    
    // Step 1: Calculate subtree sizes for each node
    calculateSubtreeSize(root);

    // Step 2: Replace each node's value with the left subtree size
    replaceWithLeftSubtreeSize(root);

    cout << "In-order traversal after replacement: ";
    printInOrder(root);  // Output the modified tree
    cout << endl;

    return 0;
}
