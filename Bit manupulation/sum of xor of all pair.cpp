#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR( vector<long long int>&arr,int n)
    {
    	//Complete the function
    	 long long int cnt;
         long  long int ans=0;
        for(int j=0;j<60;j++){
            cnt=0;
            for(int i=0;i<n;i++){
                if((arr[i]>>j)&1)
                cnt++;
            }

            long long int val=(1ll<<j)%mod;
            long long int val1=(cnt*(n-cnt))%mod;
            ans=ans+(val1*val)%mod;
            ans%=mod;  
        }
        return ans;
    }
int main()
{
    int n;
    cin>>n;

    vector<long long int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumXOR(arr,n); 
    return 0;
}