#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *insert_BST(TreeNode *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new TreeNode(d);
        return root;
    }
    else if (d > root->val)
    {
        root->right = insert_BST(root->right, d);
    }
    else
        root->left = insert_BST(root->left, d);
    return root;
}

TreeNode *input_data(TreeNode *root)
{
    cout << "enter data for root node\n";
    int d;
    cin >> d;
    while (d != -1)
    {
        root = insert_BST(root, d);
        cout << "enter rest data \n";
        cin >> d;
    }
    return root;
}
// Function to count nodes in a subtree
int countNodes(TreeNode *node)
{

    if (node == nullptr)
        return 0;

    return 1 + countNodes(node->left) + countNodes(node->right);
}

// Function to replace each node's value with the count of nodes in its left subtree
void replaceWithLeftSubtreeCount(TreeNode *node)
{
    if (node == nullptr)
        return;

    // Count nodes in the left subtree
    int leftCount = countNodes(node->left);

    // Replace the current node's value with the count of left subtree nodes
    node->val = leftCount;

    // Recursively process the left and right subtrees
    replaceWithLeftSubtreeCount(node->left);
    replaceWithLeftSubtreeCount(node->right);
}

// Helper function to print the tree in-order
void printInOrder(TreeNode *node)
{
    if (node == nullptr)
        return;
    printInOrder(node->left);
    cout << node->val << " ";
    printInOrder(node->right);
}

int main()
{

    cout << "enter data for BST\n";
    TreeNode *root = NULL;
    root = input_data(root);

    replaceWithLeftSubtreeCount(root);

    cout << "In-order traversal after replacement: ";
    printInOrder(root); // Output the modified tree
    cout << endl;

    return 0;
}
