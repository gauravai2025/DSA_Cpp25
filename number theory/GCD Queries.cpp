#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	   int pre[n+1];
	   pre[0]=0;
	   int suff[n+1];
	   suff[0]=0;
	   for(int i=0;i<n;i++){
	       cin>>a[i];
	       pre[i+1]=__gcd(pre[i],a[i]);
	   }
	    for(int i=0;i<n;i++){
	        suff[i+1]=__gcd(suff[i],a[n-i-1]);
	    }
	    int l,r;
	    while(q--){
	        cin>>l>>r;
	        int ans=__gcd(pre[l-1],suff[n-r]);
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
