#include<bits/stdc++.h>
using namespace std;

// Time Complexity
// Finding maximum: O(n)
// Counting frequencies: O(n)
// Traversing frequency array: O(mxele)

// Overall:

// time: O(n+maxElement)
// Space Complexity:O(maxElement)for the frequency array.

int main()
{
int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
 cin>>arr[i];   
}

int mxele=*max_element(arr.begin(),arr.end());
vector<int>feq(mxele+1,0);

for(int i=0;i<n;i++){
feq[arr[i]]++;
}

for(int i=0;i<=mxele;i++){
    int cnt=feq[i];
    while(cnt--){
        cout<<i<<" ";
    }
}

return 0;
}