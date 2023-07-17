#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
	int t;
	cin>>t;
	while(t--){
    int n; 
    cin>>n;
	string str;
	cin>>str;
  long long  int number=0;
long long int  pow2=1;
   for(int i=n-1;i>=0;i--){
        int dgtb=str[i]-'0';
        number+=dgtb*pow2;
		pow2*=2;
    }
    cout<<number<<endl;
	}
    return 0;
}