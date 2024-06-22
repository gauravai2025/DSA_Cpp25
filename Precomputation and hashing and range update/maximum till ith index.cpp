#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int size;
cout<<"Enter the size of array: ";
cin>>size;
vector<int> arr(size,0);
cout<<"enter element of array\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}

vector<int>premax(size,0);

int mx=INT_MIN;

for(int i=0;i<size;i++){

    premax[i]=max(mx,arr[i]);
    mx=premax[i];
}

int q;
cout<<"Enter the number of queries: ";
cin>>q;
vector<int>ans;

cout<<"Enter the value of i to find maximum element till i \n";

while(q--){
    int i;
    cin>>i;
    i--;
    ans.push_back(premax[i]);
}

cout<<"Maximum element till ith index\n";

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
 
 
    return 0;
}