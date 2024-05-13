 
using namespace std;
 
int main() {
	
int t;
cin>>t;
while(t--){
	map<long long int,long long int>mp;
	 int n,m;
	 cin>>n;
	 long long int a;
	 for(int i=1;i<=n;i++){
		 cin>>a;
		mp[a]++;
	 }
	 long long int b;
	 cin>>m;
	 for(int i=1;i<=m;i++){
		 cin>>b;
		 if(mp[b]>=1){
		 long long int sec=mp[b];
		 while(sec!=0){
		 cout<<b<<" ";
		 sec--;
		 mp[b]--;
		 }
			
			
		 }
	 }
	 for(auto it:mp){
		long long int sec=it.second;
		 while(sec!=0){
		 cout<<it.first<<" ";
		 sec--;
		 }
	 }
	 cout<<endl;
}
return 0;
}
 