#include<bits/stdc++.h>
using namespace std;

 bool isRectangleOverlap(vector<pair<int,int>>&rec1, vector<pair<int,int>>&rec2) {

 }
 
int main()
{

int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

int p1,r1,p2,r2;
cin>>p1>>r1>>p2>>r2;

vector<pair<int,int>>rec1;
vector<pair<int,int>>rec2;

rect1.push_back({x1,y1});
rect1.push_back({x2,y2});
rect2.push_back({p1,r1});
rect2.push_back({p2,r2});

if(isRectangleOverlap(rec1,rec2))
cout<<"overlap";
else
cout<<"not overlap";

    return 0;
}