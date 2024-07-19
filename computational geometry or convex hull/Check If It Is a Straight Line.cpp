#include<bits/stdc++.h>
using namespace std;

 bool checkStraightLine(vector<vector<int>>& coordinates) {

        int i,c=0;
        float m;

        if(coordinates.size()<3)
        return 1;

        if(coordinates[0][0]==coordinates[1][0])
        m=10000.0;
        else
        m=float((coordinates[1][1]-coordinates[0][1]))/(coordinates[1][0]-coordinates[0][0]);


        for(i=2;i<coordinates.size();i++){
            float slope;
            if(coordinates[i][0]==coordinates[i-1][0])
             slope=10000.0;
            else
            slope=float((coordinates[i][1]-coordinates[i-1][1]))/(coordinates[i][0]-coordinates[i-1][0]);
            if(slope!=m)
            return 0;

        }
        return 1;

 }
 
int main()
{

int n;
cout<<"Enter the number of points:\n";
cin>>n;
vector<vector<int>>points;
int size=n;

while(n--){
    int x,y;
    cin>>x>>y;
    points.push_back({x,y});
}

if(checkStraightLine(points))
cout<<"lie on same straight line";
else
cout<<"not lie on same straight line";
 
 
 
    return 0;
}