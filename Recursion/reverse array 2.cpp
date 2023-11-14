#include<bits/stdc++.h>
using namespace std;
// time complexity is O(n/2) and space complexity is O(1)

void reverse1(int st,int end ,int *arr){
    if(st>end)
    return ;
    swap(arr[st],arr[end]);
    reverse1(st+1,end-1,arr);
}


int main()
{
 cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];}


     reverse1(0,size-1,arr);
     cout<<"reverse array is\n";
        for(int i=0;i<size ;i++){
            cout<<arr[i]<<" ";}
       
 
    return 0;
}