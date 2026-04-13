#include<bits/stdc++.h>
using namespace std;
 
int main()
{

 int n,q;
 cin>>n>>q;

 vector<vector<char>>grid(n,vector<char>(n));

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>grid[i][j];
    }
 }

 vector<vector<int>>presum(n+1,vector<int>(n+1,0));

 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        presum[i][j]=presum[i-1][j]+presum[i][j-1]-presum[i-1][j-1]+(grid[i-1][j-1]=='*');
    }
 }

while(q--){

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    int num_trees=presum[x2][y2]-presum[x1-1][y2]-presum[x2][y1-1]+presum[x1-1][y1-1];

    cout<<num_trees<<endl;
}



 
 
 
    return 0;
}