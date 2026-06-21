#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
 cin>>arr[i];   
}


for(int i=0;i<n;i++){
    int mnidx=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[mnidx])
    mnidx=j;
}  
swap(arr[i],arr[mnidx]);
}

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

return 0;
}