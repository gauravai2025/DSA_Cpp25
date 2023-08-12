#include <bits/stdc++.h>
using namespace std;

int main() {

	
	    int m,k;
	    cout<<"size of both aray\n";
	    cin>>m>>k;
	    set<int>s1;
	    set<int>s2;
	  set<int> intersect;
	    set<int>su;

	    int a,b;
	    cout<<"enter element of 1st array\n";
	    for(int i=0;i<m;i++){
	        cin>>a;
	        s1.insert(a);
	        su.insert(a);
	        
	    }
	    
	    	    cout<<"enter element of 2nd array\n";

	    for(int i=0;i<k;i++){
	        cin>>b;
	        s2.insert(b);
	        su.insert(b);
	        
	    }
		
	    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                std::inserter(intersect, intersect.begin()));
                 
	  cout<<"number of common element\n";
	  cout<<intersect.size()<<endl;
	   cout<<"common element:\n";

	     for(auto it:intersect
		 	     ){
	         cout<<it<<" ";
	     }
	    
	    cout<<endl;
 cout<<"union of both arrays:\n";
		 for(auto it:su
		 	     ){
	         cout<<it<<" ";
	     }
	    
	    cout<<endl;
	
	
	return 0;
}
