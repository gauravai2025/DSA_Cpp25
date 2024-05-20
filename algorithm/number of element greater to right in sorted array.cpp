#include<bits/stdc++.h>
using namespace std;

void  count_greater_right(vector<int>&arr,int size){
    for(int i=0;i<size;i++){
        int rgt=upper_bound(arr.begin(),arr.end(),arr[i])-arr.begin();
        cout<<size-rgt<<" ";
    }
    

}
 
int main()
{
int size;
cout<<"enter number of element in vector\n";
cin>>size;
vector<int>arr(size);
cout<<"enter  element of vector in sorted order\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
 count_greater_right(arr,size);
 
    return 0;
}