#include<bits/stdc++.h>
using namespace std;

 pair<double,double> min_max_AreaRect(vector<vector<int>>& points) {
	int n = points.size();
	
	set<pair<int, int>> exists;
    
	for (auto p : points)
	exists.insert({p[0], p[1]});

	double min_area= INT_MAX;
    double max_area= INT_MIN;
	
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			for (int k=j+1; k<n; k++) {
				
				int x1 = points[i][0], y1 = points[i][1], x2 = points[j][0], y2 = points[j][1], x3 = points[k][0], y3 = points[k][1];
				
				// being {x1, y1} as right angle point
				if ((y2-y1) * (y3-y1) + (x2-x1) * (x3 - x1) == 0) {
					
					int x4 = x2 + x3 - x1;
					int y4 = y2 + y3 - y1;
					
					if (exists.find({x4, y4}) != exists.end()) {
						
						// area = length * height
						double area = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) * sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));

						min_area = min(min_area, area);
                        max_area = max(max_area, area);
					}
				}
			}
		}
	}
	
	if (min_area == INT_MAX)
	return {0,0};
    else
	return {min_area, max_area};
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

pair<double,double>res=min_max_AreaRect(points);
cout<<"Minimum Area of rectangle formed from n points: "<<res.first<<endl;
cout<<"Maximum Area of rectangle formed from n points:"<<res.second<<endl;
 
  return 0;
}