#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll findEquationValue(pair<int,int>p1,pair<int,int>p2,pair<int,int>p3){
    ll x1=p1.first;
   ll x2=p2.first;
    ll x3=p3.first;

    ll y1=p1.second;
    ll y2=p2.second;
    ll y3=p3.second;
      
ll val=(y3-y2)*(x2-x1)-(y2-y1)*(x3-x2);
return val;


    }

void convex_hull(vector<vector<int>>&points) {

  sort(points.begin(),points.end());

   deque<pair<int,int>>lower,upper;
 
 for(auto & point:points){
    int lsize=lower.size();
    int usize=upper.size();

    // check for lower

while(lsize>=2 && findEquationValue(lower[lsize-2],lower[lsize-1],{point[0],point[1]})<0){
    lower.pop_back();
    lsize--;
}


  // check for upper
  while(usize>=2 && findEquationValue(upper[usize-2],upper[usize-1],{point[0],point[1]})>0){
    upper.pop_back();
    usize--;
}

lower.push_back({point[0],point[1]});
upper.push_back({point[0],point[1]});

 }
 
 // combine lower and upper boundary

 set<pair<int,int>>boundarypoints;

for (auto &point :lower){
    boundarypoints.insert(point);
}

 
for(auto &point :upper){
    boundarypoints.insert(point);
}

cout<<boundarypoints.size()<<endl;

for(auto & point:boundarypoints){
   cout<<point.first<<" "<<point.second<<endl;
}

}


 
int main()
{

int n;
cin>>n;
vector<vector<int>>points;
int size=n;

while(n--){
    int x,y;
    cin>>x>>y;
    points.push_back({x,y});
}

convex_hull(points);

 
 
 
    return 0;
}