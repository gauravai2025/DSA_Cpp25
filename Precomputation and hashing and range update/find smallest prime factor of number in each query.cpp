#include<bits/stdc++.h>
using namespace std;

const int N=1e7;
 
int main()
{
    
    vector<int>smallest_prime_factor(N+1,0);
    smallest_prime_factor[1]=1;

   for(int i = 2; i <= N; i++){
        if(smallest_prime_factor[i] == 0) { // i is a prime number
            for(int j = i; j <= N; j += i){
                if(smallest_prime_factor[j] == 0)
                    smallest_prime_factor[j] = i;
            }
        }
    }

    int q;
    cout<<"enter number of query:\n";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<smallest_prime_factor[num]<<endl;
    }

 
    return 0;
}