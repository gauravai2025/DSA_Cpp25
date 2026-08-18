#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>>dp;

    void TreeAncestor(int n,vector<int>& parent){
      int col=log2(n)+1;
      dp.resize(n,vector<int>(col,-1));

      for(int i=1;i<n;i++){
        dp[i][0]=parent[i];
      }

      for(int j=1;j<col;j++){
        for(int i=1;i<n;i++){
            if(dp[i][j-1]!=-1)
          dp[i][j]=dp[dp[i][j-1]][j-1];  
        }
      }  
    }
    
    int getKthAncestor(int node, int k){
     
     for(int i=31;i>=0;i--){

       if(k&(1<<i))
       node=dp[node][i]; 

       if(node==-1)
       return -1;
       
      }  
      return node;
    }
 
int main()
{

int n;
cin>>n;
cout<<"enter number of node in tree:\n";

vector<int>parent(n);
cout<<"enter parent for each node: \n";

for(int i=0;i<n;i++){
cin>>parent[i];   
}

TreeAncestor(n,parent);

int q;
cout<<"enter number of queries:\n";
cin>>q;

cout<<"enter node and k value:\n";

while(q--){
int node,k;   
cin>>node>>k;    
cout<<getKthAncestor(node,k)<<" ";
}
return 0;
}