 #include<bits/stdc++.h> 
using namespace std;
const int n=1e5+5;
int dp[n];
     int fib(int n) {
    if(dp[n]!=-1)   // memoise check calculated or not memoisation
    return dp[n];
    if(n <= 1) 
      return n;
     return dp[n]=fib(n - 1) + fib(n - 2);
        // dp[n]=fib(n - 1) + fib(n - 2);   same code
       // return dp[n];
    }

int main() {
   cout<<"enter  number\n";
    int num;
    cin >> num;
    memset(dp,-1,sizeof(dp));   // set array value -1 
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<num<<"th  "<<"fibonacci term: "<<fib(num);
return 0;
}