#include<bits/stdc++.h>
using namespace std;

int second_largest(int *arr,int size){
    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }
        else{
            if(arr[i]>max2)
                max2=arr[i];
            
        }

    }
    return max2;
}

 
int main()
{
    cout<<"Enter the size of the array:\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";

    for(int i=0;i<n;i++){
     cin>>arr[i];
    }

    cout<<"second largest element is: "<<second_largest(arr,n)<<"\n";

 
 
    return 0;
}