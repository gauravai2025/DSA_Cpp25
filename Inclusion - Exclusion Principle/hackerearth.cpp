#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin >> num;   
	vector<string>name(num);
	vector<vector<int>>pos(num,vector<int>(5));
	unordered_map<char,int>mp;
	mp['a']=0;
	mp['e']=1;
	mp['i']=2;
	mp['o']=3;
	mp['u']=4;

	for(int i=0;i<num;i++){
	 cin>>name[i];
	 int size=name[i].size();
	for(int j=0;j<size;j++){
	if(name[i][j]=='a' ||name[i][j]=='e' || name[i][j]=='i'||name[i][j]=='o'||name[i][j]=='u' )

	pos[i][mp[name[i][j]]]=1;
		}
	}

int cnt=0;
 vector<long long int>count;

	for(int i=0;i<5;i++){
		cnt=0;
    for(int j=0;j<num;j++){
		if(pos[j][i]==1)
		cnt++;

		}
		count.push_back(cnt);
	}
	
    for(int i=0;i<5;i++){
        if(count[i]>=3)
        count[i]=count[i]*(count[i]-1)*(count[i]-2)/6;
		else
        count[i]=0;
	}

     // inclusion exclusion principle
    
    int countsetbit=0;
    long  long int temp=0;
    long long int ans=0;
     for (int i = 1; i < (1<<5); i++){
       temp=0;
      countsetbit=0;
      for (int j = 0; j< 5; j++){

        if(i&(1<<j)){
        countsetbit++;
        temp+=count[j];
      }
      }
      if(countsetbit&1)
      ans+=temp;
      else
      ans-=temp;
     }
   
//   for(int i=0;i<5;i++){
//     ans+=count[i];
//   }
	
	cout<<ans<<endl;
}
return 0;
}