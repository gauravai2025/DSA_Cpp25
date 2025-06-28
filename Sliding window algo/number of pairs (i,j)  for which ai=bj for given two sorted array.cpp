
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll numberofpair(vector<int>&a, vector<int>&b, int n,int m)
{
    
    int left=0,right=0;
    ll ans=0;
   
    while (left < n && right < m) {
        
        if (a[left] == b[right]){
            ll countA = 0, countB = 0;
            ll value = a[left];

            while (left < n && a[left] == value) {
                countA++;
                left++;
            }

            while (right < m && b[right] == value) {
                countB++;
                right++;
            }

            ans += countA * countB;
        }
        
         else if (a[left] < b[right]){
            left++;
        }
        
         else {
            right++;
        }
    }

    return ans;
   
   
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
    
    cout<<numberofpair(arr1,arr2,n,m);
  
    return 0;
}