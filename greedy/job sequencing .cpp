#include<bits/stdc++.h>
using namespace std;

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
        
         for(int j=obj[i].second;j>=1;j--){
             
          if(schedule[j]==-1){
              countjob++;
              maxprofit+=obj[i].first;
              schedule[j]=i;
              
              break;
          }     
             
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