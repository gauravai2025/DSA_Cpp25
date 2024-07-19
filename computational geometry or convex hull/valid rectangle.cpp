#include<bits/stdc++.h>
using namespace std;

bool validReactangle(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>&p4) {
        
}

 
int main()
{

int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

vector<int>p1={x1,y1};
vector<int>p2={x2,y2};
vector<int>p3={x3,y3};
vector<int>p4={x4,y4};

if(validReactangle(p1,p2,p3,p4))
cout<<"valid square";
else
cout<<"not valid square";

return 0;
}