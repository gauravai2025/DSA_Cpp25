#include<bits/stdc++.h>
using namespace std;
 

 long long  int largestPrimeFactor(int N){
        // code here
        int ans;
        for(int i=2;i*i<=N;i++){
            while(N%i==0 ){
                N/=i;
                ans=i;
            }
            
        }
        if(N>1)
        ans=N;
        return ans;
    }

int main()
{

cout<<"Enter the number"<<endl;
int n;
cin>>n;
cout<<"Largest prime factor of "<<n<<" is "<<largestPrimeFactor(n)<<endl;

 
 
 
    return 0;
}