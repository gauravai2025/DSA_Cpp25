#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
// declare parent array
multiset<int>countcomponents;

int parent[N];

// store size of each group
int Size[N];

void make(int node){
    // single node self parent
    parent[node]=node;

    // intial each group of size 1
    Size[node]=1;
}

int findpathcompression(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= findpathcompression(parent[node]);

}

void Unionbysize(int node1,int node2){

   int par1=findpathcompression(node1);
   int par2=findpathcompression(node2);

// parent of both node not same then merge group else lies in same group

if(par1!=par2){

// find size of group 
if(Size[par2]>Size[par1])
// ensure always link small group to large group
  swap(par1,par2);

parent[par2]=par1;
countcomponents.erase(countcomponents.find(Size[par1]));
countcomponents.erase(countcomponents.find(Size[par2]));
countcomponents.insert(Size[par1]+Size[par2]);
 
Size[par1]+=Size[par2];
   }
}

int main() {
    int n, q, type, u, v;
    cout << "Enter the number of nodes:\n";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        make(i);
        countcomponents.insert(1);
    }

    cout << "Enter the number of queries:\n";
    cin >> q;

    while (q--) {
        cin >> type >> u >> v;

        if (type == 1) {
            Unionbysize(u, v);
        } 
        
        else if (type == 2) {
            int par1 = findpathcompression(u);
            int par2 = findpathcompression(v);
            if (par1 == par2)
                cout << u << " and " << v << " lie in the same connected component.\n";
            else
                cout << u << " and " << v << " do not lie in the same connected component.\n";
        } 

        else if(type==3){
            cout<<"number of connected components: "<<countcomponents.size()<<endl;
        }
        
        else {
            cout << "Invalid query type!\n";
        }
    }

    return 0;
}
