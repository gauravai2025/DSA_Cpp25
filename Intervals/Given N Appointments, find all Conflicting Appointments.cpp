#include<bits/stdc++.h>
using namespace std;

void findConflictingAppointments( vector<pair<int,int>>&intervals){

    sort(intervals.begin(),intervals.end());
    int currend=intervals[0].second;

    cout<<"Following appointments conflict with each other\n";

    for(int i=1;i<intervals.size();i++){
        // if the current interval has start time less than or equal to the end time of the previous interval conflict exists
        if(intervals[i].first<=currend){
            cout<<intervals[i].first<<" "<<intervals[i].second<<endl;
            currend=max(currend,intervals[i].second);
        }
        else{
            currend=intervals[i].second;
        }
    }

    if(intervals[1].first<=intervals[0].second){
        cout<<intervals[0].first<<" "<<intervals[0].second<<endl;
    }

}
 
int main()
{
    int n;
    cout<<"Enter the number of appointments\n";
    cin>>n;

    vector<pair<int,int>>intervals;
    cout<<"Enter the start and end time of each appointment\n";

    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        intervals.push_back({start,end});
    }

    findConflictingAppointments(intervals);
 
 
 
    return 0;
}