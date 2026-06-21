#include<bits/stdc++.h>
using namespace std;

// given an array of n integers return random number from array 
// such that each number in array must have same probability of getting choosen ie, (1/n)

 
int main()
{
 int n;
 cout<<"enter size of array: ";
 cin>>n;
 int arr[n];
 cout<<"enter array element: ";

 for(int i=0;i<n;i++){
   cin>>arr[i];
 }

 srand(time(0));

 int q;
 cout<<"enter number of query: ";
 cin>>q;

 while(q--){
  int index=rand()%n; // generate random number 0 to n
  cout<<arr[index]<<" ";  
 }
 
return 0;
}