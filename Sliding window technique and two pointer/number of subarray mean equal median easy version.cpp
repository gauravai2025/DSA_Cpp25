
//     卐 🚩ॐ 🚩卐
//          🌎 
//          🌎 
//     卐 🚩ॐ 🚩卐


// "The only way to do great work is to love what you do. If you haven't found it yet, keep looking. Don't settle." ~ 𝓖𝓪𝓾𝓻𝓪𝓿

#include <bits/stdc++.h>
using namespace std;

// The median of B is defined to be the element at index [m/2] (0-based)  when the elements of B are sorted in ascending order.

// That is, the median of an odd-length array is the middle element after sorting, and the median of an even-length array is the left of the two middle elements after sorting.

// You're given an array A containing N integers, each of which lies between 1 and 2
// codechef rating: 1714

typedef long long ll;
typedef vector<ll>vl;

void solve()
{

ll n;
cin>>n;

vl arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}  

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