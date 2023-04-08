#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int size;
  cout<<"enter size of array\n";
  cin>>size;
  int a[size];
    cout<<"enter  element of array in sorted order"<<"\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
 cout<<"enter element to search\n";
 int val;
 cin>>val;
 if(binary_search(a,a+size,val))
 cout<<"element found \n";
 else
 cout<<"element not found\n";
 
 
    return 0;
}