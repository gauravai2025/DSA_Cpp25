#include<bits/stdc++.h>
using namespace std;
 
 int maxSubstring(string S)
	{
	    
	 int mxdiff=INT_MIN;
	 int sum=0;
	 
	for(char ch:S){
	   
	   if(ch=='0')
	   sum+=1;
	   else
	   sum-=1;
	  
	  mxdiff=max(mxdiff,sum);
	  
	  if(sum<0)
	  sum=0;
	   
	   
	}
	
	return mxdiff;
	    
	}

int main()
{
    string s;
    cout<<"Enter the binary string\n";
    cin>>s;
 
   cout<<maxSubstring(s);
    return 0;
}