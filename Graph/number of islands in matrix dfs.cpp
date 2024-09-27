 #include<bits/stdc++.h>
 using namespace std;
  
  bool isvalid(vector<vector<char>>&grid,int sr,int sc,int row,int col){
        
        if(sr>=0 && sr<row && sc>=0 && sc<col && grid[sr][sc]=='1')
        return 1;
        else
        return 0;
    }
    
    vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};

   void  dfs(vector<vector<char>>& grid,int sr,int sc,int row,int col){
       
       grid[sr][sc]='0';
       
       // dfs in all 8 directions
       
       for(int i=0;i<8;i++){
           int xnew=sr+directions[i][0];
            int ynew=sc+directions[i][1];
            
            if(isvalid(grid,xnew,ynew,row,col))
            dfs(grid,xnew,ynew,row,col);
           
       }
       
       
   }
   
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
       
        int cnt=0;
        int row=grid.size();
        int col=grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                dfs(grid,i,j,row,col);
                cnt++;
                }
            }
        }
        
        return cnt;
        
    }


int main()
 {
 
 int row,col;
 cout<<"Enter the row and column\n";
cin>>row>>col;
vector<vector<char>>grid(row,vector<char>(col));

cout<<"Enter the matrix\n";

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>grid[i][j];
    }
}

cout<<"number of islands: "<<numIslands(grid)<<"\n";
  
     return 0;
 }