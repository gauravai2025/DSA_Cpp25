#include<bits/stdc++.h>
using namespace std;

 bool islie(vector<vector<int>>& points) {

        // for lie on straight line same slope
        int dy1=points[1][1]-points[0][1];
        int dx1=points[2][0]-points[1][0];
        int dy2=points[2][1]-points[1][1];
        int dx2=points[1][0]-points[0][0];

        if((dx1*dy1)==(dy2*dx2))
        return 1;
        else
        return 0;
        
    }
 
int main()
{
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;

vector<vector<int>>points={{x1,y1},{x2,y2},{x3,y3}};

if(islie(points))
cout<<" lie on same straight line";
else
cout<<"not lie on same straight line";

    return 0;
}