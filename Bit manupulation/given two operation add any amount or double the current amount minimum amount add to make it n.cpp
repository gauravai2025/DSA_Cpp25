#include<bits/stdc++.h>
using namespace std;

 int kernighan(long long int n){
        int cnt=0;
     
        while(n){
           // int rsbm=n&(~n+1);
          long long int rsbm=n&(-n);
            n-=rsbm;
            cnt++;
        }
        return cnt;
 }
 
int main()
{

    int qe;
    cout<<"enter number of queries\n";
    cin>>qe;

    while(qe--){
     long long n;
     cin>>n;
cout<<kernighan(n)<<endl;
    }

    return 0;
}