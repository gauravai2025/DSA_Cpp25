#include<bits/stdc++.h>
using namespace std;

// function pointer for comparator
bool cmp(int a,int b){
    // correct order no swap
    if(a>b)
    return 1;
      // sawp 
    else
    return 0;

}
 
int main()
{

int n;
cout<<"enter number of element\n";
cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

// descending order sort
sort(arr.begin(),arr.end(),cmp);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}