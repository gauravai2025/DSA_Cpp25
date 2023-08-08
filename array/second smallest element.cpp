#include<bits/stdc++.h>
using namespace std;

int second_smallest(int *arr,int size){
    int min1=INT_MAX;
    int min2=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<min1){
         min2=min1;
        min1=arr[i];
            
        }
        else{
            if(arr[i]<min2)
                min2=arr[i];
            
        }

    }
    return min2;
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

    cout<<"second smallest element is: "<<second_smallest(arr,n)<<"\n";

    return 0;
}