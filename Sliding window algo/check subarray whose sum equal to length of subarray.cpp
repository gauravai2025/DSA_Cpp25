#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll int countsubarray(vector<int>&arr,int size){
 
 unordered_map<ll,ll>lensumdif;

 lensumdif[0]=1;

 ll presum=0;

 for(int i=0;i<size;i++){

    presum+=arr[i];
    int len=i+1;

    if(lensumdif[presum-len]){
        cout<<"YES\n";
        return ;
    }

    lensumdif[presum-len]++;
 }

cout<<"NO\n";

}
 
int main()
{

int size;
cout<<"enter size of array\n";
cin>>size;

vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
countsubarray(arr,size);

    return 0;
}