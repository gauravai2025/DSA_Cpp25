#include<bits/stdc++.h>
using namespace std;
int equilibrium_point(int arr[], int n)
{
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum
 
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i){
        sum += arr[i];
    }
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; // sum is now right sum for index i
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
    return -1;
}
 
int main()
{
int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];

    cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    cout << "First equilibrium index is: "<<equilibrium_point(arr,n);
  
    return 0;
}

// time complexity: O(n)
// space complexity: O(1)