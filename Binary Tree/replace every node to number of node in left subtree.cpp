        #include <bits/stdc++.h>
        using namespace std;

        // Definition for a binary tree node
        struct TreeNode {
            int val;
            TreeNode* left;
            TreeNode* right;
            TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        };

        TreeNode* buildTree(TreeNode* root) {

            cout << "Enter the data: " << endl;
            int data;
            cin >> data;
            root = new TreeNode (data);    

            if(data == -1) {
                return NULL;
            }

            cout << "Enter data for inserting in left of " << data << endl;
            root->left = buildTree(root->left);
            cout << "Enter data for inserting in right of " << data << endl;
            root->right = buildTree(root->right);
            return root;

        }

        // Function to count nodes in a subtree
        int countNodes(TreeNode* node) {

            if (node == nullptr) 
            return 0;

            return 1 + countNodes(node->left) + countNodes(node->right);
        }

        // Function to replace each node's value with the count of nodes in its left subtree
        void replaceWithLeftSubtreeCount(TreeNode* node) {
            if (node == nullptr) return;

            // Count nodes in the left subtree
            int leftCount = countNodes(node->left);

            // Replace the current node's value with the count of left subtree nodes
            node->val = leftCount;

            // Recursively process the left and right subtrees
            replaceWithLeftSubtreeCount(node->left);
            replaceWithLeftSubtreeCount(node->right);
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
            // creating a Tree
            root = buildTree(root);

            replaceWithLeftSubtreeCount(root);

            cout << "In-order traversal after replacement: ";
            printInOrder(root);  // Output the modified tree
            cout << endl;

            return 0;
        }
