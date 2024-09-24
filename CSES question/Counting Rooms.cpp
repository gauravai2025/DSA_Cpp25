#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<char>>&grid,int i,int j){

    queue<pair<int,int>>q;

    q.push({i,j});

    while(!q.empty()){

        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]=='#')
        continue;

        grid[x][y]='#';

        q.push({x+1,y});
        q.push({x-1,y});
        q.push({x,y+1});
        q.push({x,y-1});

    }

}
 
int main()
{

int n,m;
cin>>n>>m;

vector<vector<char>> grid(n,vector<char>(m));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }

}

int count_room=0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]=='.'){
            count_room++;
            bfs(grid,i,j);
        }

    }

}

cout<<count_room<<endl;

 
 
 
    return 0;
}