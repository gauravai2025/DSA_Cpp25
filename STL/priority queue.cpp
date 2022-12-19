#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>maxi;  // max priority queue
    priority_queue<int,vector<int>,greater<int>>mini;;
     maxi.push(2);
     maxi.push(6);
    maxi.push(1);
    maxi.push(9);
    int n=maxi.size();
    cout<<n;
    cout<<endl; 
    for(int i=0;i<n;i++){
        cout<<"top element: "<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"empty or not "<< maxi.empty()<<endl;
    mini.push(2);
    mini.push(6);
    mini.push(1);
    mini.push(9);
    int size=mini.size();
     for(int i=0;i<size;i++){
        cout<<"top element: "<<mini.top()<<" ";
        mini.pop();
    }

return 0;


}