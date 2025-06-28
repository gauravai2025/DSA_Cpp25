
//     卐 🚩ॐ 🚩卐
//          🌎 
//          🌎 
//     卐 🚩ॐ 🚩卐


// "The only way to do great work is to love what you do. If you haven't found it yet, keep looking. Don't settle." ~ 𝓖𝓪𝓾𝓻𝓪𝓿

#include <bits/stdc++.h>
using namespace std;

// The median of B is defined to be the element at index [m/2] (0-based)  when the elements of B are sorted in ascending order.

// That is, the median of an odd-length array is the middle element after sorting, and the median of an even-length array is the left of the two middle elements after sorting.

// You're given an array A containing N integers, each of which lies between 1 and 3

// codechef rating: 2406

typedef long long ll;
typedef vector<ll>vl;

ll countequalsub(vl&arr, ll n){
    
  ll cnt=1;
  ll ans=0;
  
  for(int i=1;i<n;i++){
      
      if(arr[i]==arr[i-1])
      cnt++;
      
      else{
      ans+=cnt*(cnt+1)/2;
      cnt=1;
      }
  }
  
    ans+=cnt*(cnt+1)/2;
    
    return ans;
}

ll sameOccurrence(vector<ll>& arr, int x, int y) {
    
    map<int,int>mp;
    
    int size=arr.size();
    mp[0]++;
    
    ll ans=0;
    int cntx=0,cnty=0;
    
    for(int i=0;i<size;i++){
        
        if(arr[i]==x)
        cntx++;
        
        if(arr[i]==y)
         cnty++;
        
        ans+=mp[cntx-cnty];
        
       mp[cntx-cnty]++;
    }
    
    return ans;
       
    }
    
    
    ll sameOccurrence2(vector<ll>& arr, int x, int y,int z) {
    
    map<int,int>mp;
    
    int size=arr.size();
    mp[0]=1;
    
    ll ans=0;
    int cntx=0,cnty=0;
    
    for(int i=0;i<size;i++){
        
        if(arr[i]==z){
         cntx=0;
         cnty=0;
         mp.clear();
        }
        
     else if(arr[i]==x)
        cntx++;
        
     else if(arr[i]==y)
         cnty++;
        
        ans+=mp[cntx-cnty];
        
       mp[cntx-cnty]++;
    }
    
    return ans;
       
    }
 
 

void solve()
{

ll n;
cin>>n;

vl arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}  
  ll sub1=sameOccurrence(arr,1,3);
  ll sub2=sameOccurrence2(arr,1,3,2);
  
  ll ans=sub1-sub2;

   // subarrays with only 1s or 3s
    for (int i = 0; i < n; i++) {
        
      if (arr[i] == 2) 
      continue;
      
      int j = i;
      
      while (j < n && arr[i] == arr[j])
      j++;
      
      int len = j - i;
      ans += 1LL * len * (len + 1) / 2;
      i = j - 1;
    }
 
    
    cout<<ans<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  //   cin.tie(NULL);
    cout.tie(0); //  cout.tie(NULL);
    solve();

    return 0;
}