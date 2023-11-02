#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
	int t;
	cin>>t;
	while(t--){
  
	string str;
	cin>>str;
    int size=str.size();
  long long  int number=0;
long long int  pow2=1;


   for(int i=size-1;i>=0;i--){
        int dgtb=str[i]-'0';
        number+=dgtb*pow2;
		pow2=pow2<<1;
    }
    cout<<number<<endl;
	}
    return 0;
}