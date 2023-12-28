#include<bits/stdc++.h>
using namespace std;

int maxAbsSum(vector<int> &arr, int n) 
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<int>permt;
    int size=arr.size();
    int i=0,j=size-1;
   bool flag=1;
    while(i<=j){
      if (flag) {
        permt.push_back(arr[i]);
        i++;
        flag=0;
      }
      else{
         permt.push_back(arr[j]);
        j--;  
        flag=1;
      }
    }
   int ans=0;
   ans+=abs(permt[0]-permt[size-1]);

   for(int i=0;i<size-1;i++){
       ans+=abs(permt[i]-permt[i+1]);
   }
   return ans;


}
 
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int>arr;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"The maximum sum of absolute difference of any permutation of the given array is: "<<maxAbsSum(arr,size)<<endl;

    return 0;
}