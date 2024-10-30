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


TreeNode* buildTree(TreeNode* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new TreeNode(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
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
    node->val = (node->right != nullptr) ? node->right->val : 0;

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
    
    //creating a Tree
    root = buildTree(root);
    
    // Step 1: Calculate subtree sizes for each node
    calculateSubtreeSize(root);

    // Step 2: Replace each node's value with the left subtree size
    replaceWithLeftSubtreeSize(root);

    cout << "In-order traversal after replacement: ";
    printInOrder(root);  // Output the modified tree
    cout << endl;

    return 0;
}
