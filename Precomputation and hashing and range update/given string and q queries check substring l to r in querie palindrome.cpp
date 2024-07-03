#include <bits/stdc++.h>
using namespace std;
int main() {
int qe;

cout<<"Enter the number of queries: ";
cin>>qe;
string str;
cout<<"Enter the string: ";
cin>>str;

vector<vector<int>>mp;
vector<int>hash(26,0);

int size=str.size();

for(int i=0;i<size;i++){
	hash[str[i]-'a']++;
	mp.push_back(hash);

}

int l,r;
int cnt=0,val=0;

cout<<"Enter the queries in the format l and r: \n";

while(qe--){
	cin>>l>>r;
	l--;r--;
     cnt=0;

	 for(int i=0;i<26;i++){

		if(l==0)
		val=mp[r][i];
		else
		val=(mp[r][i]-mp[l-1][i]);

		if(val&1)
		cnt++;
	 }
    
	if(cnt>1)
	cout<<"Impossible\n";
	else
	cout<<"Possible\n";
}

return 0;

}