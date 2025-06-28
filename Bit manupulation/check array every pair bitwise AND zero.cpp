#include<bits/stdc++.h>
using namespace std;
 
// given array check given array is good or not an array is good if every disticnt pair bitwise AND zero

bool check_good(vector<int>&arr){
  
    int size=arr.size();

    int mask=arr[0];

    for(int i=1;i<size;i++){

    if((mask&arr[i])!=0)
    return 0;

    mask|=arr[i];
    }

    return 1;
}

int main()
{

int size;
cin>>size;

vector<int>arr(size);

for(int i=0;i<size;i++){
    cin>>arr[i];
}

if(check_good(arr))
cout<<"good array\n";
else
cout<<"not good";

return 0;
}