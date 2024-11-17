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

  void printpreorder(node* root){

    if(root==nullptr){
        return;
    }

    cout<<root->data<<" ";
    
    for(auto child:root->children){
        printpreorder(child);
    }

  }

    void printpostorder(node* root){

    if(root==nullptr){
        return;
    }

   
    for(auto child:root->children){
        printpostorder(child);
    }

     cout<<root->data<<" ";
    

  }

  void printlevelorder(node* root){

    queue<node*>q;
    q.push(root);

    while(!q.empty()){
      int size=q.size();

      while(size--){

        node* temp=q.front();
        q.pop();

        cout<<temp->data<<" ";

        for(auto child:temp->children){
            q.push(child);
        }
    }

    cout<<endl;

  }

  }
 
int main()
{

   node* root=nullptr;
   root= build_tree(root);
   
   cout<<"preorder: ";
   printpreorder(root);

   cout<<endl<<"postorder: ";
   printpostorder(root);

    cout<<endl<<"levelorder: \n";
    printlevelorder(root);

 return 0;
}