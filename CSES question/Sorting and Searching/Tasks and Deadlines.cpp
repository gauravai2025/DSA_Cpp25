#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n;
    cin >> n;
    vector<pair<int,int>>tasks(n);

    for(int i=0;i<n;i++)
    {
        cin >> tasks[i].first >> tasks[i].second;
    }
    sort(tasks.begin(),tasks.end());    // Sorting the tasks based on the first element of the pair. ie, the duration.

    long long int reward=0;
    long long int time=0;

    for(int i=0;i<n;i++){
        time+=tasks[i].first;
        reward+=tasks[i].second-time;   // Reward is the difference between the deadline and the time taken to complete the task. finishing early is rewarded.
    }

    cout << reward << endl;
 
 
 
    return 0;
}