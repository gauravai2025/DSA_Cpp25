#include<bits/stdc++.h>
using namespace std;

	vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
	
	bool isvalid(vector<vector<int>>& grid,int x,int y){
	   
	   if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size())
	   return 1;
	   else
	   return 0;
	    
	}
	
    int minimumCostPath(vector<vector<int>>& grid) 
    {
     
     int size=grid.size();
     
    vector<vector<int>>dist(size,vector<int>(size,INT_MAX));
    
    dist[0][0]=grid[0][0];
    
    set<pair<int,pair<int,int>>>st;
    
    st.insert({grid[0][0],{0,0}});
    
    while(!st.empty()){
        
    auto top= *(st.begin());
     
     st.erase(st.begin());
     
     int x=top.second.first;
     int y=top.second.second;
     int currwt=top.first;
     
     for(auto dir:directions){
         int xnew=x+dir[0];
         int ynew=y+dir[1];
         
      if(isvalid(grid,xnew,ynew)){
        if(currwt+grid[xnew][ynew]<dist[xnew][ynew]){
        auto find=st.find({dist[xnew][ynew],{xnew,ynew}});
        
        if(find!=st.end())
        st.erase(find);
        
        st.insert({currwt+grid[xnew][ynew],{xnew,ynew}});
        dist[xnew][ynew]=currwt+grid[xnew][ynew];
        
        }  
      }     
     }
     
     
    }
    
    return dist[size-1][size-1];

    }
 
int main()
{
    int size;
    cin>>size;

    vector<vector<int>>grid(size,vector<int>(size,0));

    for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
            cin>>grid[i][j];
    }

    }

    cout<<"shortest path: "<<minimumCostPath(grid);
    return 0;
}