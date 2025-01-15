#include<bits/stdc++.h>
using namespace std;

const int N=3*1e5+10;
// declare parent array

int parent[N];

vector<multiset<int>>comp(N);

void make(int node){
    // single node self parent
    parent[node]=node;
    comp[node].insert(node);
}

int findpathcompression(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= findpathcompression(parent[node]);

}

void Unionbyrank(int node1,int node2){
   int par1=findpathcompression(node1);
   int par2=findpathcompression(node2);

// parent of both node not same then merge group else lies in same group

if(par1!=par2){

for(auto ele:comp[par2]){
    comp[par1].insert(ele);
    parent[ele]=par1;

}

}

}
 
int main()
{
    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++){
        make(i);
    }

   string type;

    int u,v;

    while(q--){

    cin>>type;
      
    if(type=="union"){
    cin>>u>>v;
    Unionbyrank(u,v);
    }

    else{
    cin>>u;
    int par=findpathcompression(u);
    int mn=*comp[par].begin();
    int mx=*comp[par].rbegin();
    int total=comp[par].size();

    cout<<mn<<" "<<mx<<" "<<total<<endl;

    }

    }

    return 0;
}