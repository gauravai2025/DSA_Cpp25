
#include<bits/stdc++.h>
using namespace std;

    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int>st; // time complexity O(n+m)

        for(int i=0;i<n;i++) // space complexity O(n+m)
        st.insert(a[i]); // if use ordered set  time complexity O(n+m) space complexity O(n+m)

          for(int i=0;i<n;i++)
         st.insert(b[i]);

        return st.size();
        
    }

int main() {

	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	
	for(int i = 0;i<n;i++)
		cin >> a[i];
		
	for(int i = 0;i<m;i++)
		cin >> b[i];
	
	cout <<doUnion(a, n, b, m) << endl;
	    
	return 0;
}
