#include<bits/stdc++.h>
using namespace std;

long long sumOfMaxAndMin(int *nums, int n, int k) {
	// Initialize a variable to store final result
	long long totalSum = 0;

	for (int i = 0; i <= n-k; i++) {

		// Stores minimum value for this window.
		long long minCurrent = 10e9;

		// Stores maximum value for this window.
		long long maxCurrent = -1;	

		for (int j = i; j < i+k; j++) {
			if(nums[j]<minCurrent) {
				minCurrent = nums[j];
			}

			if(nums[j]>maxCurrent) {
				maxCurrent = nums[j];
			}

		}

		// Add minimum and maximumvalues of this window to the final result.
		totalSum += minCurrent + maxCurrent;	
	}
    
    return totalSum;
}
int main()
{
cout<<"Enter the size of array"<<endl;
int size;
cin>>size;
int a[size];
 int k;
 cout<<"Enter the size window of k"<<endl;
    cin>>k;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
  cout<<"The sum of minimum and maximum elements of all subarrays of size “k”"<<endl;
  cout<<sumOfMaxAndMin(a,size,k)<<endl;
 
 
    return 0;
}