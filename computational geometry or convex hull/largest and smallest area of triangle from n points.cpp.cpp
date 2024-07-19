#include<bits/stdc++.h>
using namespace std;


  pair<double,double> largest_smallest_TriangleArea(vector<vector<int>>& points) {

        int n = points.size();
        double maxArea = 0;
        double minArea = INT_MAX;

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];
                    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
                    maxArea = max(maxArea, area);
                     minArea = min(minArea, area);
                }
            }
        }

    return {minArea,maxArea};
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

pair<ll,ll>res=largest_smallest_TriangleArea(points);
cout<<"Minimum Area of triangle formed from n points: "<<res.first<<endl;
cout<<"Maximum Area of triangle formed from n points:"<<res.second<<endl;
 
return 0;
}
