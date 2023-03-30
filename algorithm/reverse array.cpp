#include<bits/stdc++.h>
using namespace std;
 
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
            cout<<arr[i];
        }
 cout<<endl;

    reverse(arr,arr+size); // reverse whole array
    cout<<"reverse whole array\n";
     for(int i=0;i<size;i++){
            cout<<arr[i];
        }

    return 0;
}