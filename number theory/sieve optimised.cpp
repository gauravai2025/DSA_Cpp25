#include<bits/stdc++.h>
using namespace std;

    void countprimes(long long int n) {
     long long int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;

        int sqr=sqrt(n);

        for(int i=2;i<=sqr;i++){
            
            if(prime[i]){
            for(int j=i*i;j<=n;j=j+i ){
                prime[j]=false;
            }

            }
        }

        cout<<"all prime number upto "<<n<<" are: ";

        for(int i=2;i<=n;i++){
            if(prime[i]){
          cnt++;
          cout<<i<<" ";
            }
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