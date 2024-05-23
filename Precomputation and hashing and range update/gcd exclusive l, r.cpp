#include <bits/stdc++.h>
using namespace std;
const int m=1e5+10;
int pre[m+10];
int suf[m+10];

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int a[m];
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	        pre[i]=__gcd(a[i],pre[i-1]);
	    }
	    for(int i=1;i<=n;i++){
	        suf[i]=__gcd(a[n+1-i],suf[i-1]);
	    }
	  
	    while(q--){
	        int l,r;
	        cin>>l>>r;
	        cout<<__gcd(pre[l-1],suf[n-r])<<endl;
	        
	    }
	    
	}
	
	return 0;
}
