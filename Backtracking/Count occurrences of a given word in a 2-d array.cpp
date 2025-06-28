#include<bits/stdc++.h>
using namespace std;

// Find the number of occurrences of a given search word in a 2d-Array of characters where the word can go up, down, left, right, and around 90-degree bends.
// Note: While making a word you can use one cell only once.

vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
    
    bool isvalid(vector<string>&mat,int x,int y,int idx,string & target){
    
    if(x>=0 && x<mat.size() && y>=0 && y<mat[0].size() && mat[x][y]==target[idx])    
        return 1;
        else
        return 0;
    }
    
    void solve(vector<string>&mat, string &target,int &ans,int x,int y,int idx){
    
    if(idx==target.size()){
     ans++;
     return ;
    }
    
    // mark visited
    char temp=mat[x][y];
    mat[x][y]='@';
  
    
    for(auto dir:directions){
        
    int xnew=x+dir[0];
    int ynew=y+dir[1];
    
    if(isvalid(mat,xnew,ynew,idx,target))
    solve(mat,target,ans,xnew,ynew,idx+1);
        
    }
    
    // backtrack
    
     mat[x][y]=temp;
        
    }
    
    int findOccurrence(vector<string> &mat, string target){
        
        int ans=0;
        int row=mat.size();
        int col=mat[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            if(mat[i][j]==target[0])   
          solve(mat,target,ans,i,j,1);
                
            }
        }
       
        return ans;
    }
 
int main()
{

 int row,col;
 cout<<"enter row an column\n";
 cin>>row>>col;

 vector<string>mat(row);

 cout<<"enter character in matrix form\n";

 for(int i=0;i<row;i++){
    
    cin>>mat[i];

 }

 string target;
 cout<<"enter target string\n";
 cin>>target;

 cout<<findOccurrence(mat,target);

    return 0;
}