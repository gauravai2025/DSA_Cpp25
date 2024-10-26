#include<bits/stdc++.h>
using namespace std;

// there are N campers wandering around the city aimlessly. You have to handle Q queries; which consist of two groups finding each other and becoming one larger group. After each query, output the difference between the group of largest size and group of smallest size. If there is only one group, output 0. At first, everyone is in their own group.

// Also note, if the two campers in the query are already in the same group, print the current answer, and skip merging the groups together.
 
const int N=1e5+10;
// declare parent array
 
int parent[N];
 
// store size of each group
int sizegr[N];
multiset<int>st;
 
void make(int node){
    // single node self parent
    parent[node]=node;
 
    // intial each group of size 1
    sizegr[node]=1;
	st.insert(1);
}
 
int find(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= find(parent[node]);
 
}
 
 void merge(int node1,int node2){

     st.erase(st.find(sizegr[node2]));
    st.erase(st.find(sizegr[node1]));
      st.insert(sizegr[node1]+sizegr[node2]);

 }

void Union(int node1,int node2){
   int par1=find(node1);
   int par2=find(node2);
 
   // parent of both node not same then merge group else lies in same group
 
if(par1!=par2){
 
// find size of group 
if(sizegr[node2]>sizegr[node1])
// ensure always link small group to large group
  swap(par1,par2);
  merge(par1,par2);
   parent[par2]=par1;
   sizegr[par1]+=sizegr[par2];

 
   }
}
 
 
int main()
{
    int n;
    cout<<"enter number of camp\n ";
    cin>>n;
 
    for(int i=1;i<=n;i++){
        make(i);
    }
       

    int q;
    cout<<"enter number of query\n";
    cin>>q;
    
    int u,v;
   cout<<"enter camp1 and camp2 to merge\n";

    while(q--){
    cin>>u>>v;
    Union(u,v);

    if(st.size()==1)
    cout<<"difference between max and min group size: "<<0<<endl;

    else{
    int max1=*(--(st.end()));
    int min1=*(st.begin());
    cout<<"difference between max and min group size: "<<max1-min1<<endl;
		}
 
    }
 
    return 0;
}