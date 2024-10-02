#include<bits/stdc++.h>
using namespace std;
 
 // leaf node from n/2+1 to n alraedy satisfy min heap property
 bool isMinHeap(int *a, int n)
    {
       
        for(int i=0;i<n/2;i++){
            // parent  are greater than children
            if(a[i]>=a[2*i+1] || a[i]>=a[2*i+2])
            return 0;
        }
        return 1;
    }

int main()
{
  cout<<"enter number of element:\n";
   int n;
   cin>>n;
   int a[n];
    cout<<"enter elements:\n";

for(int i=0;i<n;i++){
    cin>>a[i];
}

 cout<<isMinHeap(a,n);
 
    return 0;
}