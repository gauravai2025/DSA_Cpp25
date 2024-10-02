#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    // Constructor
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to count the number of nodes in the binary tree
int count_node(struct Node* tree) {
    // Base case
    if (tree == nullptr)
        return 0;
    return 1 + count_node(tree->left) + count_node(tree->right);
}

// Function to check if the tree is a complete binary tree (CBT)
bool iscbt(struct Node* tree, int idx, int count) {
    // Base case
    if (tree == nullptr)
        return true;
    if (idx >= count)
        return false;

    bool left = iscbt(tree->left, 2 * idx + 1, count);
    bool right = iscbt(tree->right, 2 * idx + 2, count);

    return left && right;
}

// Function to check if the binary tree satisfies the max heap property
bool ismaxheap(struct Node* tree) {
    if (tree == nullptr)
        return true;

    // Leaf node is automatically a max-heap
    if (tree->left == nullptr && tree->right == nullptr)
        return true;

    // If node has only left child
    if (tree->right == nullptr) {
        if (tree->data < tree->left->data)
            return false;
        else
            return true;
    }

    // If node has both left and right children
    if (tree->data < tree->left->data || tree->data < tree->right->data)
        return false;

    // Recursive check on left and right subtrees
    bool left = ismaxheap(tree->left);
    bool right = ismaxheap(tree->right);

    return left && right;
}

// Function to check if the binary tree is a max-heap
bool isHeap(struct Node* tree) {
    int count = count_node(tree);

    if (iscbt(tree, 0, count) && ismaxheap(tree))
        return true;
    else
        return false;
}

// Function to build a binary tree from user input
struct Node* buildTree(struct Node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }

    root = new Node(data);  // Corrected from "node" to "Node"

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main() {
    struct Node* tree = nullptr;
    tree = buildTree(tree);

    if (isHeap(tree))
        cout << "Given binary tree is max heap\n";
    else
        cout << "Given binary tree is not max heap\n";

    return 0;
}
