
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
   // function prints union of two sorted arrays in sorted order
    void doUnion(int a[], int n, int b[], int m)  {
        set<int>st; // time complexity O(n+m.log(n+m))
        for(int i=0;i<n;i++) // space complexity O(n+m)
        st.insert(a[i]);
          for(int i=0;i<m;i++)
        st.insert(b[i]);
        for(auto it:st){
            cout<<it<<" ";
        }
        
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    ob.doUnion(a, n, b, m) ;
	    
	}
	
	return 0;
}
