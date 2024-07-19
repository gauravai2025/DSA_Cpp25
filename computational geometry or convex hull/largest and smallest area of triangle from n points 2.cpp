#include<bits/stdc++.h>
using namespace std;

 double distance(vector<int>& p1, vector<int>& p2){
        double d1=abs(p1[0]-p2[0]);
        double d2=abs(p1[1]-p2[1]);
        d1*=d1;
        d2*=d2;
        return sqrt(d1+d2);
    }

    double area(double a, double b, double c){
        double s=(a+b+c)/2.0;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    
pair<double,double> largest_smallest_TriangleArea(vector<vector<int>>& points) {

       double max_area=INT_MIN;
       double min_area=INT_MAX;

        double a=0,b=0,c=0;
        int n=points.size();

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                a=distance(points[i],points[j]);
                for(int k=j+1;k<n;k++){
                    b=distance(points[j],points[k]);
                    c=distance(points[i],points[k]);
                    max_area=max(max_area,area(a,b,c));
                    min_area=min(min_area,area(a,b,c));
                }
            }
        }

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

pair<double,double>res=largest_smallest_TriangleArea(points);

cout<<"Minimum Area of triangle formed from n points: "<<res.first<<endl;
cout<<"Maximum Area of triangle formed from n points:"<<res.second<<endl;
 
return 0;
}
