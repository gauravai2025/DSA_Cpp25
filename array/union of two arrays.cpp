
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector<int>v; // time complexity O(n+m.log(n+m))
        for(int i=0;i<n;i++) // space complexity O(n+m)
        v.push_back(a[i]); 
          for(int i=0;i<m;i++)
        v.push_back(b[i]);
        sort(v.begin(),v.end());
        int cnt=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]!=v[i+1])
            cnt++;
        }
        return cnt;
        
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
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
