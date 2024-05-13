#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
    int n,q;
	cin>>n>>q;
	
	long long int a,b;
	vector<vector<long long int>>ans;
	
	while(n--){
     cin>>a>>b;
	 ans.push_back({a,b});
	
	  }

	sort(ans.begin(),ans.end());
	long long int currst=ans[0][0];
	long long int currend=ans[0][1];

	int size=ans.size();
	vector<vector<long long int>>interval;

	for(int i=1;i<size;i++){

       if(ans[i][0]<=currend){
		currend=max(currend,ans[i][1]);
	   }

	   else{
		interval.push_back({currst,currend});
		currst=ans[i][0];
		currend=ans[i][1];
	   }
	}

    interval.push_back({currst,currend});

     long long int k;
	 long long int sum=0;
     int sizei=interval.size();

      while(q--){
		cin>>k;
		sum=0;
		 int i=0;

	for(i=0;i<sizei;i++){
         sum+=(interval[i][1]-interval[i][0]+1);
		 if(sum>=k){
			break;
		 }
	  }
      
	  if(sum<k)
	  cout<<-1<<endl;
	  else{
		sum-=(interval[i][1]-interval[i][0]+1);
		k-=sum;
		cout<<interval[i][0]+k-1<<endl;
        // cout<<interval[i][0]<<interval[i][1]<<endl;

	 }
	}
    }
	return 0;
}