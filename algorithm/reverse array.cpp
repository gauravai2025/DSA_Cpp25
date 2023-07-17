#include<bits/stdc++.h>
using namespace std;

 void reverse1(int arr[],int n){
     int start=0;
     int end=n-1;
     while(start<end){
         swap(arr[start],arr[end]);
         start++;
         end--;
     }
 }

 void reverse2(int arr[],int n,int start,int end){
    
     while(start<end){
         swap(arr[start],arr[end]);
         start++;
         end--;
     }
 }
 

int main()
{
  cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
        reverse(arr+1,arr+size);
        // reverse array from 2nd elment to last element
        cout<<"reverse array from 2nd elment to last element\n";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
 cout<<endl;

    reverse(arr,arr+size); // reverse whole array
    cout<<"reverse whole array\n";
     for(int i=0;i<size;i++){
            cout<<arr[i]<<"";
        }
        cout<<endl;
    reverse(arr,arr+size-1); // reverse whole array except last element
    cout<<"reverse whole array except last element\n";
     for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"again reverse whole array \n";
        reverse1(arr,size);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
 cout<<"again reverse array 2nd to 5th position \n";
        reverse2(arr,size,1,4);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}