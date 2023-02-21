#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    set<int>s1;
	    set<int>s2;
	  set<int> intersect;
	    set<int>su;

	    int a,b;
	    for(int i=0;i<m;i++){
	        cin>>a;
	        s1.insert(a);
	        su.insert(a);
	        
	    }
	    for(int i=0;i<k;i++){
	        cin>>b;
	        s2.insert(b);
	        su.insert(b);
	        
	    }
	    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                 std::inserter(intersect, intersect.begin()));
                 
	   cout<<intersect.size()<<" "<<n-su.size()<<endl;
	    
	    
	}
	
	return 0;
}
