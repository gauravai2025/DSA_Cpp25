#include <bits/stdc++.h>
using namespace std;

// Substring Anagram
// You are given two Strings A and B.
// You need to find the total number of substring in string A which are anagram to the string 
// B

// Anagram -> A String is said to be anagram of another string if and only if it is can be formed by rearranging the letters of it.

int main() {

	cout<<"enter both string: ";

	 string stra,strb;
	 cin>>stra>>strb;
	 
	 int lena=stra.size();
	 int lenb=strb.size();
	 unordered_map<char,int>mp;
	 
	 for(int i=0;i<lenb;i++){
	     mp[strb[i]]++;
	 }
	 
	 int cnt=0;
	 
	 for(int i=0;i<lena;i++){
	    
	    mp[stra[i]]--;
	    
	    if(i>=lenb-1){
	     bool flag=1;
	     for(auto it:mp){
         if(it.second!=0){
         flag=0;
         break;
	     } 
	     
	     }
	     
	     if(flag)
	     cnt++;
	  mp[stra[i-lenb+1]]++;
	    }
	   
	 }
	 
	 cout<<cnt<<endl;

}
