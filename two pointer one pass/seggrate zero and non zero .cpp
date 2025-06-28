#include<bits/stdc++.h>
using namespace std;

// given array seggerate zero and non zero element such that all zero at end of array and relative order of non zero element remain same do it inplace. 

// 3 5 0 8 0 4 0 = 3 5 5 4 0 0 0

void  seggerate_element(vector<int>& nums){
     
    int size=nums.size();

    int i=0,j=0;

       while(j<size){

        while(i<size && nums[i]!=0){
            i++;
        }

        j=i+1;

         while(j<size && nums[j]==0){
            j++;
        }

        if(j<size){
        swap(nums[i],nums[j]);
        i++;
        j++;
        }

       }

       cout<<"updated array\n";

       for(auto ele:nums){
        cout<<ele<<" ";
       }

}
 
int main()
{
    int size;
    cout<<"enter size of array\n";
    cin>>size;

    vector<int>arr(size);
    cout<<"enter array element\n";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  
    seggerate_element(arr);
    return 0;
}