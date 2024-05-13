#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int N;
cin>>N;
long long int x;

    long long int sum = 0;
    sum+=1ll*N*(N+1)/2;

    long long int sumval = 0;
    for(int i = 1; i < N; i++){
      cin>>x;
        sumval += x;
    }

    cout<<abs(sum-sumval)<<endl;

 
 
 
    return 0;
}

