#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
    void countprimes(long long int n) {
     long long int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                cnt++;
                ans.push_back(i);
            }
            for(int j=i*2;j<=n;j=j+i ){
                prime[j]=false;
            }
        }
        cout<<"all prime number upto "<<n<<" are: ";
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
     cout<<"number of primes:"<<cnt;
}
int main(){
    cout<<"enter number\n";
    long long int n;
    cin>>n;
    countprimes(n);
   
    return 0;
}