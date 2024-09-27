#include<bits/stdc++.h>
using namespace std;
 
    vector<vector<int>>directions={{1,0},{0,1}};

    bool isvalid(int n,int m,int sr,int sc){
        
        if(sr>=0 && sr<n && sc>=0 && sc<m )
        return 1;
        else
        return 0;
        
    }
    
   void dfs(int n,int m,vector<vector<int>>&grid,vector<vector<int>>&ans,vector<int>temp,int sr,int sc ){
       // base case
       
       if(sr==n-1 && sc==m-1){
           ans.push_back(temp);
           return ;
       }
       
       for(int i=0;i<2;i++){
           int xnew=sr+directions[i][0];
           int ynew=sc+directions[i][1];
           
           if(isvalid(n,m,xnew,ynew)){
               temp.push_back(grid[xnew][ynew]);
               
               dfs(n,m,grid,ans,temp,xnew,ynew);
               
               // backtrack
               temp.pop_back();
           }
       }
       
       
   }

    void findAllPossiblePaths(int n, int m, vector<vector<int>>&grid)
    {
        vector<vector<int>>ans;
        vector<int>temp;
        
        temp.push_back(grid[0][0]);
        
        dfs(n,m,grid,ans,temp,0,0);
        
      cout<<"All possible paths are\n";

        for(auto x:ans){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
   

int main()
{

    int row,col;
    cout<<"enter row and column\n";
    cin>>row>>col;

    vector<vector<int>>grid(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>grid[i][j];
        }
    }

findAllPossiblePaths(row,col,grid);

    return 0;
}