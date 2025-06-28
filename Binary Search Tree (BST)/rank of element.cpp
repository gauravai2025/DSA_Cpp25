#include<bits/stdc++.h>
using namespace std;

// Node structure with leftCount for rank calculation
struct Node {
    int val;
    int leftCount;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        leftCount = 0;
        left = right = nullptr;
    }
};

// Insert into BST and maintain leftCount
void insert(Node*& root, int val) {
    if (!root) {
        root = new Node(val);
        return;
    }

    if (val < root->val) {
        root->leftCount++;
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}

// Find rank of arr[k] in BST constructed from elements before index k
int getRank(Node* root, int val) {
    int rank = 0;
    while (root) {
        if (val <= root->val) {
            root = root->left;
        } else {
            rank += root->leftCount + 1;
            root = root->right;
        }
    }
    return rank;
}

// Main function to find rank using BST
int findRankUsingBST(vector<int>& arr, int k) {
    Node* root = nullptr;
    for (int i = 0; i < k; ++i) {
        insert(root, arr[i]);
    }
    return getRank(root, arr[k]);
}

// Driver code
int main() {
    vector<int> arr = {5, 2, 8, 6, 3};
    int k = 3; // arr[3] = 6

    int rank = findRankUsingBST(arr, k);
    cout << "Rank of arr[" << k << "] = " << arr[k] << " is: " << rank << endl;

    return 0;
}
