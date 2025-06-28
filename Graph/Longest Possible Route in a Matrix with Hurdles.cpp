#include<bits/stdc++.h>
using namespace std;

// Given an N x M matrix, with a few hurdles(denoted by 0) arbitrarily placed, calculate the length of the longest possible route possible from source(xs,ys) to a destination(xd,yd) within the matrix. We are allowed to move to only adjacent cells which are not hurdles. The route cannot contain any diagonal moves and a location once visited in a particular path cannot be visited again.If it is impossible to reach the destination from the source return -1.
 
vector<vector<int>>directions={{0,1},{0,-1},{1,0},{-1,0}};
    
bool isvalid(vector<vector<int>>&matrix,int x,int y){
        
if(x>=0 && x<matrix.size() && y>=0 && y<matrix[0].size() && matrix[x][y]==1)
return 1;
else
return 0;
        
}
    
    void dfsbacktrack(vector<vector<int>>&matrix, int xs, int ys, int xd,int yd,int &ans,int len){
        
        if(xs==xd && ys==yd){
        ans=max(ans,len);
        return ;
        }
        
    for(auto dir:directions){
        int xnew=xs+dir[0];
        int ynew=ys+dir[1];
        
        if(isvalid(matrix,xnew,ynew)){
         matrix[xnew][ynew]=0;
         dfsbacktrack(matrix,xnew,ynew,xd,yd,ans,len+1);
         // backtrack
           matrix[xnew][ynew]=1;
         
        }
    }    
        
        
    }


    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int ans=-1;
        
        if(matrix[xs][ys]==0)
        return ans;
        
        matrix[xs][ys]=0;
        
        dfsbacktrack(matrix,xs,ys,xd,yd,ans,0);
        
        return ans;
    }

int main()
{

int row,col;
cin>>row>>col;

vector<vector<int>>matrix(row,vector<int>(col,-1));

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
     cin>>matrix[i][j];
}

}

int xs,ys,xd,yd;
cin>>xs>>xd>>ys>>yd;

cout<<longestPath(matrix,xs,ys,xd,yd);
return 0;
}