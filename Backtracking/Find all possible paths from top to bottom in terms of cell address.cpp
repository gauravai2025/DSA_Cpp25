#include<bits/stdc++.h>
using namespace std;
 
    vector<vector<int>>directions={{1,0},{0,1}};

    bool isvalid(int n,int m,int sr,int sc){
        
        if(sr>=1 && sr<=n && sc>=1 && sc<=m )
        return 1;
        else
        return 0;
        
    }
    
   void dfs(int n,int m, vector<vector<pair<int,int>>>&ans,vector<pair<int,int>>path,int sr,int sc ){

       // base case
       
       if(sr==n && sc==m){
           ans.push_back(path);
           return ;
       }
       
       for(int i=0;i<2;i++){
           int xnew=sr+directions[i][0];
           int ynew=sc+directions[i][1];
           
           if(isvalid(n,m,xnew,ynew)){
               path.push_back({xnew,ynew});
               
               dfs(n,m,ans,path,xnew,ynew);
               
               // backtrack
               path.pop_back();
           }
       }
       
       
   }

    void findAllPossiblePaths(int n, int m)
    {
        vector<vector<pair<int,int>>>ans;
        vector<pair<int,int>>path;
        
        path.push_back({1,1});
        
        dfs(n,m,ans,path,1,1);
        
      cout<<"All possible paths are\n";

        for(auto x:ans){
            for(auto y:x){
                cout<<"("<<y.first<<" "<<y.second<<")"<<" ";
            }
            cout<<endl;
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