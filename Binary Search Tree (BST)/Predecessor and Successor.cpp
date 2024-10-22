#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int x)
    {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void predesucc(Node *root, Node *&pre, Node *&suc, int key)
{

    if (root == nullptr)
        return;

    // Traverse the left subtree
    predesucc(root->left, pre, suc, key);

    if (root->key < key)
    {
        pre = root;
    }

    if (root->key > key && !suc)
    {
        suc = root;
    }

    // Traverse the right subtree
    predesucc(root->right, pre, suc, key);
}

void predesuccoptimal(Node* root, Node*& pre, Node*& suc, int key) {
    
    if (root == nullptr) 
        return;

    // If the current node's value is greater than or equal to the key, update the successor
    if (root->key > key) {
        suc = root;  // This node could be a potential successor
        predesuccoptimal(root->left, pre, suc, key);  // Traverse the left subtree to find a smaller successor
    }
    
    // If the current node's value is less than the key, update the predecessor
    else if (root->key < key) {
        pre = root;  // This node could be a potential predecessor
        predesuccoptimal(root->right, pre, suc, key);  // Traverse the right subtree to find a larger predecessor
    }
    
    // If the node's value equals the key, we need to find the closest predecessor and successor
    else {
        // For predecessor, look for the maximum node in the left subtree (largest smaller value)
        if (root->left != nullptr) {
        Node* temp = root->left;
        while (temp->right) 
        temp = temp->right;
        pre = temp;
        }

        // For successor, look for the minimum node in the right subtree (smallest larger value)
        if (root->right != nullptr) {
            Node* temp = root->right;
            while (temp->left) 
                temp = temp->left;
            suc = temp;
        }
    }
}


int main()
{

    Node *root = NULL;
    // creating a Tree
    root = buildTree(root);

    int key;
    cout << "Enter the key to find inorde predecesor and successor: \n";
    cin >> key;

    Node *pre = nullptr, *suc = nullptr;
    predesucc(root, pre, suc, key);


    if (pre != nullptr)
        cout << "Predecessor is " << pre->key << endl;
    else
        cout << "No Predecessor";

    if (suc != nullptr)
        cout << "Successor is " << suc->key;
    else
        cout << "No Successor";
 
    cout<<endl;
    cout<<"Optimal Solution: \n";
    pre=nullptr;
    suc=nullptr;

    predesuccoptimal(root, pre, suc, key);

    if (pre != nullptr)
        cout << "Predecessor is " << pre->key << endl;
    else
        cout << "No Predecessor";

    if (suc != nullptr)
        cout << "Successor is " << suc->key;
    else
        cout << "No Successor";

    return 0;
}