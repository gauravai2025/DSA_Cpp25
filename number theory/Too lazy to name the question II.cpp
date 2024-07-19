#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;        

    vector<pair<int, int>>points;

    set<pair<int, int>>unqpoints;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
        unqpoints.insert({x, y});
    }


long long int max_area=LLONG_MIN, min_area=LLONG_MAX;

// consider only daigonal points
    for (int i = 0; i < n; i++)
    {

        for (int j =i+1; j< n; j++)
    {
        // same x coordinates  vertical line
        if(points[i].first==points[j].first)
        continue;

        // same y coordinates  horizontal line
        if(points[i].second==points[j].second)
        continue;

        int x1=points[i].first;
        int y1=points[j].second;

        
        int x2=points[j].first;
        int y2=points[i].second;
           
         // check for rectangle formed by these two points

        if(unqpoints.find({x1,y1})!=unqpoints.end() && unqpoints.find({x2,y2})!=unqpoints.end())
        {
             max_area=max(1ll*abs(x1-x2)*abs(y1-y2),max_area);

             min_area=min(1ll*abs(x1-x2)*abs(y1-y2),min_area);
           
        }

    }

    }

    if(max_area==LLONG_MIN || min_area==LLONG_MAX)
    cout<<-1<<endl;
    else
    cout<<max_area-min_area<<endl;

    return 0;
}