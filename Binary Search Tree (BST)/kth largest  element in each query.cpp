#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    int subtreecount;
    TreeNode* left;
    TreeNode* right;
   
    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
        subtreecount = 1; // Initialize subtreecount as 1 (itself)
    } 
};

// Function to insert a node in the BST
TreeNode* insert_BST(TreeNode* root, int d) {
    if (root == NULL) {
        root = new TreeNode(d);
        return root;
    }
    else if (d > root->val) {
        root->right = insert_BST(root->right, d);
    }
    else {
        root->left = insert_BST(root->left, d);
    }
    return root;
}

// Function to take input data for the BST
TreeNode* input_data(TreeNode* root) {
    cout << "Enter data for root node (-1 to stop):\n";
    int d;
    cin >> d;
    while (d != -1) {
        root = insert_BST(root, d);
        cout << "Enter next data (-1 to stop):\n";
        cin >> d;
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
    node->subtreecount = leftSize + rightSize + 1;
    return node->subtreecount;
}

// Function to find the k-th smallest element in the BST
void query(TreeNode* root, int k, int &ans) {
    if (root == nullptr) return;

    int rightSize = (root->right != nullptr) ? root->right->subtreecount : 0;

    if (k == rightSize + 1) {
        // Current node is the kth smallest element
        ans = root->val;
        return;
    } 

    else if (k <= rightSize) {
        // kth smallest is in the left subtree
        query(root->right, k, ans);
    } 

    else {
        // Adjust k and search in the right subtree
        query(root->left, k - rightSize - 1, ans);
    }
}

int main() {
    TreeNode* root = NULL;
    root = input_data(root);

    // Step 1: Calculate subtree sizes for each node
    calculateSubtreeSize(root);

    int q;
    cout << "Enter number of queries:\n";
    cin >> q;

    while (q--) {
        int k;
        cout << "Enter value of k:\n";
        cin >> k;
        int ans = -1;
        query(root, k, ans);
        if (ans != -1)
            cout << k << "th largest element is: " << ans << endl;
        else
            cout << "Element not found or k is out of bounds.\n";
    }

    return 0;
}
