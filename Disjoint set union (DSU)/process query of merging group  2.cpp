#include<bits/stdc++.h>
using namespace std;

// Alex has split into N parts, and each of these N parts is wandering around the city aimlessly. You have to handle Q queries; which consist of two groups of Alex's finding each other and becoming one larger group. After each query, output the minimum difference between two groups. If there is only one group, output 0. At first, everyone is in their own group. What this means is that there are N groups, each of which contain 1 part of Alex.

// Also note, if the two Alex's in the query are already in the same group, print the current answer, and skip merging the groups together.


const int N=1e5+10;
// declare parent array
 
int parent[N];
 
// store size of each group
int sizegr[N];
map<int,int>feq;
 
void make(int node){
    // single node self parent
    parent[node]=node;
 
    // intial each group of size 1
    sizegr[node]=1;
	  feq[1]++;
}
 
int find(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= find(parent[node]);
 
}
 
 void merge(int node1,int node2){

     feq[sizegr[node2]]--;

     if( feq[sizegr[node2]]==0)
     feq.erase(sizegr[node2]);

     feq[sizegr[node1]]--;

       if(feq[sizegr[node1]]==0)
     feq.erase(sizegr[node1]);

    feq[sizegr[node1]+sizegr[node2]]++;

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

  long long   int prev=INT_MIN;
  long long   int mndif=INT_MAX;
    bool flag=1;

  

    for(auto it:feq){

        if(it.second>1){
            mndif=0;
            flag=0;
            cout<<0<<endl;
            break;
            
        }

        else{
        mndif=min(mndif,it.first-prev);
        prev=it.first;
        }

    }

    if(flag){
      if(mndif>=INT_MAX)  // only one group
      cout<<0<<endl;
      else  
    cout<<mndif<<endl;
    }
   
		}
 
 
    return 0;
}