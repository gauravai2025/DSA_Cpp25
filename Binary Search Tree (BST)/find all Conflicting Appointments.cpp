#include<bits/stdc++.h>
using namespace std;
 
 class Node{
     public:
    int strt;
    int end;
    int maxend;
    Node* left;
    Node* right;

   // constructor
    Node(int st,int ed){
        strt=st;
        end=ed;
        left=nullptr;
        right=nullptr;
        maxend=end;
    }

 };

bool isconflict(int st1,int ed1,int st2,int ed2){

    if(st2<ed1 && ed2>st1)
    return 1;
    else
    return 0;

}

 Node* insert_intervals(int st,int ed,Node* root,vector<pair<pair<int,int>,pair<int,int>>>&conflicts){

   // base case empty tree or interval at correct position
    if(root==nullptr){
        Node* temp=new Node(st,ed);
        return temp;
    } 
    
    // check conflict

    if(isconflict(st,ed,root->strt,root->end)){
    conflicts.push_back({{st,ed},{root->strt,root->end}}); 
    }

    if(st>root->strt){
    root->right= insert_intervals(st,ed,root->right,conflicts);
    }

    else{
    root->left= insert_intervals(st,ed,root->left,conflicts); 
    }
    
     // Update the max end time in the subtree
    root->maxend = max(root->maxend, ed);

    return root;

 }

 void findConflictingAppointments(vector<pair<int,int>>appointments){

    vector<pair<pair<int,int>,pair<int,int>>>conflicts;
    
    Node* root=nullptr;  // define interval bst

    for(int i=0;i<appointments.size();i++){
       root= insert_intervals(appointments[i].first,appointments[i].second,root,conflicts);
    }

    // print conflicts intervals

     // Output the conflicts
    if (conflicts.empty()) {
        cout << "No conflicting appointments found." << endl;
    } 
    else {
    cout << "Conflicting Appointments:" << endl;

    for(auto ele:conflicts){
      cout<<"interval [ "<<ele.first.first<<" "<<ele.first.second<<" ] "<<"conflicts with "<<"interval [ "<<ele.second.first<<" "<<ele.second.second<<" ]"<<endl;
    }

    }
 }
 
int main()
{

Node* root=nullptr;

int n;
cout<<"enter number of intervals\n";
cin>>n;

vector<pair<int,int>>appointments;

for(int i=1;i<=n;i++){
cout<<"enter intervals\n";
int a,b;
cin>>a>>b;

appointments.push_back({a,b});
} 

findConflictingAppointments(appointments);

    return 0;
}