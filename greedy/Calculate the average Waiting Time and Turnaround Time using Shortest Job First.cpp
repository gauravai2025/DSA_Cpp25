#include<bits/stdc++.h>
using namespace std;
 
//  Given N processes with their arrivalTime and burstTime. The task is to return the average waitingTime and Turnaround time for the given processes.

// Shortest job first (SJF) or shortest job next, is a scheduling policy that selects the waiting process with the smallest execution time to execute next. It is a non-preemptive algorithm and no process is interrupted until it is completed, and after that processor switches to another process).

// Completion Time: Time at which process completes its execution.
// Turn Around Time: Time Difference between completion time and arrival time. Turn Around Time = Completion Time - Arrival Time
// Waiting Time(W.T): Time Difference between turn around time and burst time. 
// Waiting Time = Turn Around Time -  Burst Time
// Average Waiting Time: Sum of all waiting time divided by the number of processes.
// Average Turnaround Time: Sum of all turnaround time divided by the number of processes.

 void averageTimes(vector<int>&arrivalTime, vector<int>&burstTime, int n){
    
    int size=arrivalTime.size();
    vector<int>ct(size,0);
    int completed=0;
    vector<int>waiting(size,0);
    vector<int>turnaround(size,0);
    double totalturnaround=0;
    double totalwaiting=0;


int timer=*min_element(arrivalTime.begin(),arrivalTime.end());
    
 while(completed<n){

   int idx=-1;
   int sjf=INT_MAX;

 for(int i=0;i<size;i++){

     if(arrivalTime[i]<=timer && burstTime[i]<sjf  && burstTime[i]>0){
        sjf=burstTime[i];
        idx=i;
     }
    }
    
   
   
   // no process is available at the given time
    if(idx==-1){
    timer++;
    }

    else{

    timer+=burstTime[idx];

    ct[idx]=timer;
    completed++;
    turnaround[idx]=ct[idx]-arrivalTime[idx];
    waiting[idx]=turnaround[idx]-burstTime[idx];
    burstTime[idx]=0;  // process is completed
    totalturnaround+=turnaround[idx];
    totalwaiting+=waiting[idx];


    }
 }
 
    double avgturnaround=1.0*totalturnaround/n;
    double avgwaiting=totalwaiting/n;
     
     // set precision to 2 decimal places
    cout<<fixed<<setprecision(2);
    
    cout<<"average waiting time "<<avgwaiting<<endl;
    cout<<"average turnaround time "<<avgturnaround<<endl;

 }

int main()
{

int n;
cout<<"Enter the number of processes\n";
cin>>n;

vector<int>arrivalTime(n);

cout<<"Enter the arrival time of processes\n";
for(int i=0;i<n;i++){
    cin>>arrivalTime[i];
}

vector<int>burstTime(n);

cout<<"Enter the burst time of processes\n";
for(int i=0;i<n;i++){
    cin>>burstTime[i];
}

 averageTimes(arrivalTime,burstTime,n);
  return 0;
}