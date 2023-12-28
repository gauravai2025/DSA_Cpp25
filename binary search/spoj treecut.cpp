#include <iostream>
using namespace std;
 
bool isvalid(int *a,int n,long long int m,long long int mid){
	long long int wood=0;
	for(int i=0;i<n;i++){
		if(a[i]>mid)
		wood+=(a[i]-mid);
	}
	if(wood>=m)
	return 1;
	else
	return 0;
}

int main(){

	int n;
	cin>>n;
	long long int m;
	cin>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	long long int st=0;
	long long int end=1000000000;
	long long int ans=0;
	
	long long int mid;
	
	while(st<=end){
		mid=(st+end)/2;
		if(isvalid(a,n,m,mid)){
			ans=mid;
			st=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	cout<<ans;
	
 
	return 0;
} 