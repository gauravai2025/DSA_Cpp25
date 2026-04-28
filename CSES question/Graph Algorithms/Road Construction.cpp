#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
// declare parent array

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

   Size[par1]+=Size[par2];
   }
}

 
int main()
{

int n;
int m;
cin>>n>>m;
multiset<int>st;

for(int i=1;i<=n;i++){
    make(i);
    st.insert(1);
}

while(m--){

int a,b;
cin>>a>>b;
int para=findpathcompression(a);
int parb=findpathcompression(b);

if(para!=parb){
int sizea=Size[para];
int sizeb=Size[parb];
Unionbysize(a,b);
st.erase(st.find(sizea));
st.erase(st.find(sizeb));  
st.insert(sizea+sizeb);

}

cout<<st.size()<<" "<<*st.rbegin()<<"\n";

}
    return 0;
}