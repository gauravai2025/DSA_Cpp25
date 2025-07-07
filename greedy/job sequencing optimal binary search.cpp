#include<bits/stdc++.h>
using namespace std;

int findslot(vector<int> &schedule, int j) {

    // Find the latest slot available before or on the deadline 
    int st=1,end=j;
      int slotno=-1;
    // Binary search to find the latest free slot
    
    while(st<=end) {
        int mid = (st + end) / 2;

        // If the slot is free, we can schedule the job here
        if(schedule[mid] == -1) {
            // Check if we can find a later slot
            st = mid + 1;
        } else {
            // If the slot is occupied, we need to check earlier slots
            end = mid - 1;
        }
    }

    return j;
}

void jobSequencing(vector<int> &deadline, vector<int> &profit) {
       
    int maxdeadline=*max_element(deadline.begin(),deadline.end());
    
    vector<int>schedule(maxdeadline+1,-1);
    
    vector<pair<int,int>>obj;
    
    for(int i=0;i<deadline.size();i++){
        obj.push_back({profit[i],deadline[i]});
    }
    
    sort(obj.rbegin(),obj.rend());
    int countjob=0,maxprofit=0;
    
     for(int i=0;i<deadline.size();i++){

        int slotno=findslot(schedule, obj[i].second);
       
             
          if(slotno!=0){
              countjob++;
              maxprofit+=obj[i].first;
              schedule[slotno]=i;
          }     
             
         }
     
    cout << "Maximum number of jobs: " << countjob << endl;
    cout << "Maximum profit: " << maxprofit << endl;
        
    }
 
int main()
{
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;
    vector<int> deadline(n), profit(n);
    cout << "Enter deadlines: ";
    for(int i = 0; i < n; i++) {
        cin >> deadline[i];
    }
    cout << "Enter profits: ";
    for(int i = 0; i < n; i++) {
        cin >> profit[i];
    }

    jobSequencing(deadline, profit);

    return 0;
}