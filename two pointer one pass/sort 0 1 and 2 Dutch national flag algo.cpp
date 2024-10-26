#include<bits/stdc++.h>
using namespace std;

// sort the array of 0,1,2 using Dutch national flag algorithm in one pass without using sort function
 
 void sortDutchnationalalgo(vector<int>& nums) {
           int size=nums.size();
        int low=0,mid=0,high=size-1;
     
        while(mid<=high){

            if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
            }
            else if(nums[mid]==1)
            mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

 }

int main()
{

int size;
cout<<"Enter the size of the array\n";
cin>>size;
vector<int> arr(size);
cout<<"Enter the elements of the array: 0 1 2 \n";

for(int i=0;i<size;i++)
{
    cin>>arr[i];
}

sortDutchnationalalgo(arr);

cout<<"sorted array is: \n";

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
 
    return 0;
}