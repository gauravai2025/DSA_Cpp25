#include<bits/stdc++.h>
using namespace std;

  long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        int size=arr.size();
        
        long long int presum=0;
        
        for(int i=0;i<size;i++){
            
            if((arr[i]-presum)>1)
            return presum+1;
            
            presum+=arr[i];
        }
        
        long long smallest=accumulate(arr.begin(),arr.end(),0ll);
        
        return smallest+1;
  }
 
int main()
{

int n;
cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}   

sort(arr.begin(),arr.end());

cout<<findSmallest(arr);
 
 
 
    return 0;
}