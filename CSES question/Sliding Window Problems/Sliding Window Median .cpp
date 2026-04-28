#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n,k;
cin>>n>>k;
int a[n];



for(int i=0;i<n;i++){
cin>>a[i];
}

multiset<int>window;

for(int i=0;i<k;i++){
    window.insert(a[i]);
}

 auto median_iter=window.begin();

if(k%2==0)   //if k is even then median is lower of the two middle elements
    median_iter = next(window.begin(), (k-1) / 2); // Find the median

    else
     median_iter = next(window.begin(), k / 2); // Find the median

    int median = *median_iter;

    cout<<median<<" ";

for(int i=k;i<n;i++){

 // Remove the element going out of the window
        window.erase(window.find(a[i - k]));
        // Add the new element
        window.insert(a[i]);

        // Calculate the new median
    if(k%2==0)   //if k is even then median is lower of the two middle elements
     median_iter = next(window.begin(), (k-1) / 2); // Find the median

    else
     median_iter = next(window.begin(), k / 2); // Find the median

        median = *median_iter;

        cout<<median<<" ";
    
}
 
 
    return 0;
}