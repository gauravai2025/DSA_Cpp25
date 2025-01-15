#include<bits/stdc++.h>
using namespace std;

void maxSubstring(string S){

    int st=0,end=0;
   long long int maxsum=INT_MIN;
    long long int sum=0;
    int stans=-1;

for(int i=0;i<S.size();i++){
    
    if(S[i]=='0')
    sum+=1;
    else
    sum-=1;

    if(maxsum<sum){
    maxsum=sum;
    end=i;
    stans=st;
    }

    if(sum<0){  // if sum is negative then start from next index as new subarray
    sum=0;
    st=i+1;
   
    }

}

cout<<"Maximum difference of zeros and ones in binary string is: "<<maxsum<<endl;
cout<<"Substring is: " <<endl;

cout<<stans<<" "<<end<<endl;

for(int i=stans;i<=end;i++){
    cout<<S[i];
}

}

int main()
{
    string str;
    cout<<"Enter the binary string\n";
    cin>>str;
    maxSubstring(str);
    return 0;
}