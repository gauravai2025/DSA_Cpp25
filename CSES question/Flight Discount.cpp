#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n,m;
cin>>n>>m;

vector<vector<pair<int,int>>>adj(n+1);

while(m--){
 int a,b,wt;
 cin>>a>>b>>wt;
 adj[a].push_back({b,wt});   
}

vector<int>dist(n+1,INT_MAX); 

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
    }
}
}

long long int mnwt=dist[n];
cout<<mnwt;

return 0;
}