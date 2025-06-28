#include<bits/stdc++.h>
using namespace std;

void dfssubtreeprecompute(int src,int par,vector<int>&parent,vector<vector<int>>&adj){
 
   parent[src]=par;

    for(auto child:adj[src]){
        if(par!=child){  // to avoid going back to parent node viseted previously
            dfssubtreeprecompute(child,src,parent,adj);
            
        }
    }
}
 
int main()
{

int n;
cin>>n;

vector<int>parent(n+1,-1);

vector<vector<int>>adj(n+1);

while(n>1){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
n--;
}

dfssubtreeprecompute(1,-1,parent,adj);

int q;
cin>>q;

while(q--){

int type,x,y;
cin>>type>>x>>y;

if(type==1){
bool flag=false;
 while(x!=-1){

    if(x==y){
     flag=true;  
    break;
    } 
    x=parent[x];
}  

if(flag)
cout<<"YES\n";
else
cout<<"NO\n";
}

else{
bool flag=false;

while(y!=-1){

    if(x==y){
    flag=true;  
    break;
    } 
    y=parent[y];
}  

if(flag)
cout<<"YES\n";
else
cout<<"NO\n";
}
}

return 0;
}