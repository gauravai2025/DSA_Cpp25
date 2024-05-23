#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int size;
cout<<"Enter the size of array: ";
cin>>size;
vector<int> arr(size,0);
int qe;
cout<<"Enter the number of queries: ";
cin>>qe;

while(qe--){
    int l,r,val;
    cout<<"Enter the value of l,r and val: ";
    cin>>l>>r>>val;
    l--;
    r--;
    arr[l]^=val;
    if(r+1<size)
    arr[r+1]^=val;
}

for(int i=1;i<size;i++){
    arr[i]=arr[i]^arr[i-1];
}

cout<<"Array after manipulation is: \n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}