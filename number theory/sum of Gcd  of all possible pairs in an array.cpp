#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+1;


// Where gcf(x,y) is the greatest common factor of x and y.

// He wants to calculate the sum of GCF's of all possible pairs in an array, where array of size N consists of numbers from 1 to N.

// Input: Input contains an integer t, which is the number of test cases, then t lines follow where each line contains an integer N, where N is the size of array.

// Output: Output the sum of GCD of all numbers taken pairwise.

// Constraints: 0<t<=10 1<=N<=400000
 
int main()
{

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>feq(N,0);


    for(int i=1;i<=n;i++)
    {
        feq[i]++;
    }

    vector< ll>cntdiv(N,0);

    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            cntdiv[i]+=feq[j];
        }
    }

     for(int i=1;i<N;i++){
        cntdiv[i] = (cntdiv[i] * (cntdiv[i] - 1)) / 2;
     }

     // inclusion-exclusion principle

     for(int i=N-1;i>0;i--){
         for(int j=2*i;j<N;j+=i)
        {
            cntdiv[i]-=cntdiv[j];
        }
     }

	 ll sum=0;

    for(int i=1;i<=n;i++){
        sum+=cntdiv[i]*i;
    }

	cout<<sum<<endl;

	}
    
    return 0;
}