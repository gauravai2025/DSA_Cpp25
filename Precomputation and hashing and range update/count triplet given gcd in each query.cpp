#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+1;

// You are given a sequence a1, a2, ..., aN. Count the number of triples (i, j, k) such that 1 ≤ i < j < k ≤ N and GCD(ai, aj, ak) = 1. Here GCD stands for the Greatest Common Divisor
 
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: \n";
    cin>>n;

    vector<int> a(n);
    vector<int>feq(N,0);

    cout<<"Enter the elements of the array:\n ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        feq[a[i]]++;
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
         ll cnt=cntdiv[i];
         cnt=cnt*(cnt-1)*(cnt-2);
         cnt/=6;
        cntdiv[i] =cnt;
     }

     // inclusion-exclusion principle

     for(int i=N-1;i>0;i--){
         for(int j=2*i;j<N;j+=i)
        {
        cntdiv[i]-=cntdiv[j];
        }
     }

    int q;
    cout<<"Enter the number of queries: \n";
    cin>>q;

    while(q--)
    {
    int x;
    cout<<"Enter the gcd value: \n";
    cin>>x;
    cout<<"The number of triplets with gcd = "<<x<<" is: ";
    cout<<cntdiv[x]<<endl;
    }
   
    return 0;
}