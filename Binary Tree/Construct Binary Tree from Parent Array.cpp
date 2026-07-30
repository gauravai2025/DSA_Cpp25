#include<bits/stdc++.h>
using namespace std;
 

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};


class Solution {
  public:
    Node* createTree(vector<int>& parent) {
        
        int size=parent.size();
        vector<Node*>list(size);
        
        Node*root=nullptr;

        for(int i=0;i<size;i++){
         list[i]=new Node(i);
        }
        
        for(int i=0;i<size;i++){
            
         if(parent[i]==-1)  
         root=list[i];
         else if(list[parent[i]]->left==nullptr)
         list[parent[i]]->left=list[i];
         else
         list[parent[i]]->right=list[i];
        }
        
        return root;
    }
};

int main()
{
    int size;
    cout<<"enter number of node: \n";
    cin>>size;
    vector<int>parent(size);
   
    cout<<"enter parent of each node;\n";

    for(int i=0;i<size;i++){
        cin>>parent(i);
    }

    createTree(parent);
    
    return 0;
}