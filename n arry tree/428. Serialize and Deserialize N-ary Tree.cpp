#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    vector<node*>children;

  // constructor
    node(int val){
     data=val;

    }

};

  node* build_tree(node* root){

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter the number of children of " << data << endl;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"Enter the "<<i<<"th child of "<<data<<endl;
        node* child=build_tree(root);
        root->children.push_back(child);

    }

    return root;

  }

 
int main()
{

    node* root=nullptr;
   root= build_tree(root);
   

 
 
 
    return 0;
}