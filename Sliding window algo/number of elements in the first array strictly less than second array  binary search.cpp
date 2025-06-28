
#include <bits/stdc++.h>
using namespace std;

// For each element of the second array, find the number of elements in the first array strictly less than second array using binary search

typedef long long ll;

void numberofelemnt(vector<int>&a, vector<int>&b, int n,int m)
{
    int right=0;

    while (right<m){

    int idx=lower_bound(a.begin(),a.end(),b[right])-a.begin();
    cout<<idx<<" ";
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