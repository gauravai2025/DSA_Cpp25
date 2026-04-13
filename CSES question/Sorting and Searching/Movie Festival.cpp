#include<bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {

    int ans=1;
    int size=intervals.size();
    
    if(size==1)
    return 0;

       sort(intervals.begin(),intervals.end());

       int currend=intervals[0][1];

       for(int i=1;i<size;i++){
         if(intervals[i][0]>=currend){
             currend=intervals[i][1];
             ans++;

           }

           else{
            if(currend>intervals[i][1])
            {
                currend=intervals[i][1];
            }
           }
       }
       return ans;
    }


 
int main()
{

int n;
cin>>n;
vector<vector<int>>intervals;

int a,b;
while(n--){
    cin>>a>>b;
    intervals.push_back({a,b});
}
 
 cout<<eraseOverlapIntervals(intervals);
 
 
    return 0;
}