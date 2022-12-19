#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int na,nb,nc,nd;
	    cin>>na>>nb>>nc>>nd;
	    int k=max(na,max(nb,max(nc,nd)));
	    cout<<k<<"\n";
	}
	return 0;
}