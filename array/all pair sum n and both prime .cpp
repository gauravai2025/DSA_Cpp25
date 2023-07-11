#include<bits/stdc++.h>
using namespace std;

        bool  prime[1000001];
    void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));
 
    for (long long int p = 2; p * p <= n; p++) {
       
        if (prime[p] == true) {
  
            for (long long int i = p * p; i <= n; i += p){
                prime[i] = 0;
        }
    }
}
    }
   
   
    
    vector<vector<int>> findPrimePairs(int n, 
    vector<vector<int>>&ans) {
        unordered_set<int>st;
        SieveOfEratosthenes(1000001);
        for(int i=2;i<=n;i++){
            if(prime[i])
                st.insert(i);
        }
        for(int i=2;i<=n;i++){
                 if(prime[i]){
            if(st.find(n-i)!=st.end()){
           
                vector<int>otp;
                otp={i,n-i};
                ans.push_back(otp);
            }
                 }
        }
        return ans;
    }



   
   int main(){
     int n=10;
     vector<vector<int>>ans;
     findPrimePairs(n,ans);
     for(int i=0;i<ans.size();i++){
       cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
     }
     return 0;
   }
   