#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	set<int>s1;
	set<int>s2;
	set<int> intersect;
	long long int a,b;
	cout<<"enter two number :";
	cin>>a>>b;
	long long int cnt;
	int gcd1=0;
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0){
		s1.insert(i);
		s1.insert(a/i);
		}
	}
	
	for(int i=1;i<=sqrt(b);i++){
		if(b%i==0){
		s2.insert(i);
		s2.insert(b/i);
	}
	}
	set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),std::inserter(intersect, intersect.begin()));

cnt=intersect.size();
cout<<"common divisor are\n";
for(auto it:intersect){
	cout<<it<<" ";
}
cout<<endl;
cout<<"number of common divisor :";
	cout<<cnt<<endl;
	for(auto it:intersect){
	if(it>gcd1)
	gcd1=it;
}
cout<<"gcd : "<<gcd1;
	return 0;
}

	