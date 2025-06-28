#include<bits/stdc++.h>
using namespace std;

void sortrecursv(vector<int>& arr,int size,int idx){
        
        // base case
        
        if(idx>=size-1)
        return ;
        
            bool flag=1;
            
            for(int j=0;j<size-idx-1;j++){
                
                if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=0;
            }
            
            }
        
        if(flag)
        return ;
        
        sortrecursv(arr,size,idx+1);
    }

     void bubbleSort(vector<int>& arr) {
        int size=arr.size();
        
       sortrecursv(arr,size,0);
    }

 
int main()
{

int size;
cin>>size;
vector<int>arr(size);
for(int i=0;i<size;i++){
    cin>>arr[i];
}

bubbleSort(arr);

cout<<"Sorted array is: ";
 
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}