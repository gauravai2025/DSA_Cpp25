#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

pair<ll,ll> min_max_AreaRect(vector<vector<int>>& points) {
     set<pair<int,int>>pts;
       ll min_area=INT_MAX;
       ll max_area=INT_MIN;

    for(auto it:points){
        pts.insert({it[0],it[1]});
    }

 int size=points.size() ; 

 for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        int x1=points[i][0];
        int y1=points[i][1];

        int x2=points[j][0];
        int y2=points[j][1];
      
      // check for diagonal points

      if(x1==x2 || y1==y2)    // vertical and horizontal line parellel to y and x axis
      continue;

      int x3=x2;
      int y3=y1;

      int x4=x1;
      int y4=y2;
          
          // check for other points present
      if(pts.count({x3,y3})>0 && pts.count({x4,y4})>0)
      {
        ll width=abs(x1-x2);
        ll height=abs(y1-y2);
        min_area=min(min_area,width*height);
        max_area=max(max_area,width*height);
      }
 }      

    }
     
    if(min_area==INT_MAX)
     return {0,0};
     else
    return {min_area,max_area};
        
    }

    
 
int main()
{

int n;
cout<<"Enter the number of points:\n";
cin>>n;
vector<vector<int>>points;

while(n--){
  int x,y;
  cin>>x>>y;
  points.push_back({x,y});
}

pair<ll,ll>res=min_max_AreaRect(points);
cout<<"Minimum Area of rectangle formed from n points: "<<res.first<<endl;
cout<<"Maximum Area of rectangle formed from n points:"<<res.second<<endl;
 
  return 0;
}
