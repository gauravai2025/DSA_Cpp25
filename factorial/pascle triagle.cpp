
#include <bits/stdc++.h>
using namespace std;
// time complexity is O(n^3)
//space complexity is O(1)
long long int binomialcofficient(int n,int r){
	if(n==0 || r==0)
	return 1;
    if(r>n-r)  // ncr=nc(n-r)
    r=n-r;
    long long int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1); // ncr=nc(n-r)/r!
    }
    return res;


	}

	
int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin >> num;	
	for(int i=0;i<num;i++){
		for(int j=0;j<=i;j++){
			cout<<binomialcofficient(i,j)<<" ";
		}
		cout<<endl;
	}
	}
	return 0;
	}
