#include <bits/stdc++.h>
using namespace std;

 int maxPoints(vector<vector<int>>& points) {

        int n = points.size();
        if(n == 1)
            return 1;
        
        int result = 0;
        
        for(int i = 0; i<n; i++) {
            
            unordered_map<string, int> mp;
            
            for(int j = 0; j<n; j++) {
                
                if(i == j) continue;
                
                auto dy = points[j][1] - points[i][1];
                auto dx = points[j][0] - points[i][0];
                auto gcd = __gcd(dy, dx);
                
                string key = to_string(dy/gcd) + "_" + to_string(dx/gcd);
                
                mp[key]++;
                
            }
            
            for(auto &it : mp) {
                result = max(result, it.second+1);
            }
        }
        
        return result;
    }

int main()
{

int n;
cout<<"enter number of points\n";
cin>>n;
vector<vector<int>> points;

while(n--){
    int x,y;
    cin>>x>>y;
    points.push_back({x,y});
}

cout<<"maximum number of points lie on same line : "<<maxPoints(points);


    return 0;
}