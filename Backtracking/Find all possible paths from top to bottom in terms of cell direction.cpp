#include<bits/stdc++.h>
using namespace std;
 
    vector<vector<int>>directions={{1,0},{0,1}};
    unordered_map<int,char>movedir={{0,'D'},{1,'R'}};

    bool isvalid(int n,int m,int sr,int sc){
        
        if(sr>=0 && sr<n && sc>=0 && sc<m )
        return 1;
        else
        return 0;
        
    }

    // without backtracking string calling dfs not change original string 
    
//       void dfs(int n,int m,vector<string>&ans,string path,int sr,int sc ){
//        // base case
       
//        if(sr==n-1 && sc==m-1){
//            ans.push_back(path);
//            return ;
//        }
       
//        for(int i=0;i<2;i++){
//            int xnew=sr+directions[i][0];
//            int ynew=sc+directions[i][1];
           
//            if(isvalid(n,m,xnew,ynew)){
//                dfs(n,m,ans,path+movedir[i],xnew,ynew);
//            }
//        }
//    }

// backtracking 

   void dfs(int n,int m,vector<string>&ans,string path,int sr,int sc ){
       // base case
       
       if(sr==n-1 && sc==m-1){
           ans.push_back(path);
           return ;
       }
       
       for(int i=0;i<2;i++){
           int xnew=sr+directions[i][0];
           int ynew=sc+directions[i][1];
           
           if(isvalid(n,m,xnew,ynew)){
               path.push_back(movedir[i]);
               
               dfs(n,m,ans,path,xnew,ynew);
               
               // backtrack
               path.pop_back();
           }
       }
   }

    void findAllPossiblePaths(int n, int m)
    {
        vector<string>ans;
        string path;
        
        // temp.push_back(grid[0][0]);
        
        dfs(n,m,ans,path,0,0);
        
      cout<<"All possible paths are\n";

        for(auto paths:ans){
            cout<<paths<<endl;
        }
    }
   

int main()
{
    int row,col;
    cout<<"enter row and column\n";
    cin>>row>>col;

findAllPossiblePaths(row,col);

    return 0;
}