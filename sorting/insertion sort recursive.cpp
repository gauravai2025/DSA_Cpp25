#include<bits/stdc++.h>
using namespace std;

 void solverucrsv(vector<int>& arr,int size,int idx){
        
        // base case
        
        if(idx>=size)
        return ;
        
         int currval=arr[idx];
            
           int j=idx-1;
                
            while(arr[j]>currval){
            arr[j+1]=arr[j];
            j--;
            }
            
          arr[j+1]=currval ;
          
        solverucrsv(arr,size,idx+1);
    }
    

   void insertionSort(vector<int>& arr) {
          
        int size=arr.size();
            
        solverucrsv(arr,size,1);   
        
    }
 
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    vector<int>arr(size);
cout<<"Enter the elements of array: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    insertionSort(arr);

    cout<<"Sorted array is: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 
 
    return 0;
}