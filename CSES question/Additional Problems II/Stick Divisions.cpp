#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int x,n;
cin>>x>>n;
priority_queue<int,vector<int>,greater<int>>pq;

while(n--){
    int d;
    cin>>d;
    pq.push(d);
}

long long int ans=0;

while(pq.size()>1){
    long long int a=pq.top();
    pq.pop();
    long long int b=pq.top();
    pq.pop();

    ans+=(a+b);
    pq.push(a+b);
}
 
 cout<<ans<<endl;
 
 
    return 0;
}