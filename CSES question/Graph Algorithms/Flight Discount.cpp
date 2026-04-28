#include<bits/stdc++.h>
using namespace std;

long long int printpath(vector<int>&parent,int dest,map<pair<int,int>,long long int>&mp){

    long long int maxcost=-1e18;
    vector<int>path;

    while(dest!=-1){
     path.push_back(dest);
     dest=parent[dest];
    }

    reverse(path.begin(),path.end());

    for(int i=0;i<path.size()-1;i++){
     maxcost=max(maxcost,mp[{path[i],path[i+1]}]);
    }

    return maxcost;

}
 
int main()
{

int n,m;
cin>>n>>m;

vector<vector<pair<int,int>>>adj(n+1);
map<pair<int,int>,long long int>mp;

while(m--){
 int a,b,wt;
 cin>>a>>b>>wt;
 adj[a].push_back({b,wt}); 
 mp[{a,b}]=wt;  
}

vector<int>dist(n+1,INT_MAX); 
vector<int>parent(n+1,-1);

int maxwt=INT_MIN;

set<pair<long long int,long long int>>st;

st.insert({0,1});
dist[1]=0;

while(!st.empty()){

auto top=*(st.begin());
st.erase(st.begin());

int node=top.second;
long long int wtcurr=top.first;

for(auto child:adj[node]){
   
    if(wtcurr+child.second<dist[child.first]){

        if(st.find({dist[child.first],child.first})!=st.end())
        st.erase({dist[child.first],child.first});

        st.insert({wtcurr+child.second,child.first});
        dist[child.first]=wtcurr+child.second;
        parent[child.first]=node;
    }
}
}

long long int mnwt=dist[n];

long long int discountprice=printpath(parent,n,mp);
int mncost=mnwt-discountprice+discountprice/2;
cout<<mncost;

return 0;
}