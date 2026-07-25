// Grid Propagation
// You are given a grid of size N×M, where each cell contains an integer representing its signal strength.
// At the end of every hour, the signal strength of each cell is updated simultaneously. A cell takes the maximum signal strength among itself and all of its neighboring cells at the beginning of that hour.
// Two cells are considered neighbors if they share a side or a corner (i.e., each cell has at most 8 neighbors).

// Determine the minimum number of hours required until every cell in the grid has the same signal strength.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>direction={{-1,0},{-1,-1},{-1,1},{0,1},{0,-1},{1,0},{1,-1},{1,1}};

int main() {
int n,m;
cin>>n>>m;
vector<vector<int>>mat(n,vector<int>(m));
vector<vector<int>>dist(n,vector<int>(m,-1));

int mx=-1;
int mntm=0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
        mx=max(mx,mat[i][j]);
    }
}

queue<pair<int,int>>q;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==mx){
        q.push({i,j});
        dist[i][j]=0;
        }
    }
}

while(!q.empty()){
    
    pair<int,int>node=q.front();
    q.pop();
    
int x=node.first;
int y=node.second;

    mntm=max(mntm,dist[x][y]);

    for(auto dir:direction){
        
        int nx=x+dir[0];
        int ny=y+dir[1];

        if(nx>=0 && nx<n && ny>=0 && ny<m &&
            dist[nx][ny]==-1){

            dist[nx][ny]=dist[x][y]+1;
            q.push({nx, ny});
        }
    }
}
cout<<mntm<<endl;
}
