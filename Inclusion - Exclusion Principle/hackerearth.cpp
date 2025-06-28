#include <bits/stdc++.h>
using namespace std;

// Our Monk visits a neighbourhood school to teach kids, once a week. This week, they are studying the famous novel "The Three Musketeers" by Alexandre Dumas. As Monk is a fun teacher, he wants to enact a scene from the novel and hence, must choose 3 children from the class as the musketeers.
// There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.

int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin >> num;   
	vector<int>posmask(num,0);
	unordered_map<char,int>mp;
	mp['a']=0;
	mp['e']=1;
	mp['i']=2;
	mp['o']=3;
	mp['u']=4;

	for(int i=0;i<num;i++){
		string str;
		cin>>str;
		for(char ch:str){
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )	
		posmask[i]|=(1<<mp[ch]);
		}
	}
    
	long long int ans=0;

	for(int i=1;i<(1<<5);i++){ // required common vowel
	long long int cnt=0;
     for(int n=0;n<num;n++){
		if((i&(posmask[n]))==i)
        cnt++;
	 }
   long long numways=cnt*(cnt-1)*(cnt-2)/6;

   int val=i;
  int cntbit=0;
   while(val!=0){

	if(val&1)
	cntbit++;
	val=val>>1;
   }

   if(cntbit&1)
   ans+=numways;
   else
    ans-=numways;	 
	}
	
	cout<<ans<<endl;
}
return 0;
}