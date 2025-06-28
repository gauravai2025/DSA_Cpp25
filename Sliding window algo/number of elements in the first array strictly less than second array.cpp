
#include <bits/stdc++.h>
using namespace std;

// For each element of the second array, find the number of elements in the first array strictly less than second array

typedef long long ll;

void numberofelemnt(vector<int>&a, vector<int>&b, int n,int m)
{
    int left=0,right=0;

    while (left <n && right <m){
    
    if(a[left]<b[right]){
        while(left <n && right<m && a[left] < b[right]){
        left++;
        } 
    }
    
    else {
    right++;
    cout<<left<<" ";
        
    }

    }

// if there are no elements left in the first array

    while(right<m){
    cout<<left<<" ";
    right++;
    }  
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    numberofelemnt(arr1,arr2,n,m);
  
    return 0;
}