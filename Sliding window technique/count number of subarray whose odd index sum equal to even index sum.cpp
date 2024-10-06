#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll countsubarray(vector<int>&arr,int size){
 
 unordered_map<ll,ll>oddevendif;

 oddevendif[0]=1;

 ll preodsm=0,preevnsm=0;
 ll cntsubarry=0;

 for(int i=0;i<size;i++){

    if(i&1)
    preodsm+=arr[i];
    else
    preevnsm+=arr[i];

    cntsubarry+=oddevendif[preevnsm-preodsm];

    oddevendif[preevnsm-preodsm]++;
 }

 return cntsubarry;

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

cout<<countsubarray(arr,size);
    return 0;
}