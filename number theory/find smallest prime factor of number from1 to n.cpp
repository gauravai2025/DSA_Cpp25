#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter value of n: \n";
    cin>>n;

    vector<int>smallest_prime_factor(n+1,0);
    smallest_prime_factor[1]=1;

   for(int i = 2; i <= n; i++){
        if(smallest_prime_factor[i] == 0) { // i is a prime number
            for(int j = i; j <= n; j += i){
                if(smallest_prime_factor[j] == 0)
                    smallest_prime_factor[j] = i;
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<smallest_prime_factor[i]<<" ";
    }

 
    return 0;
}