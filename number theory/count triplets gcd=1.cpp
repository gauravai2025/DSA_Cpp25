#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+1;
 
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
   
   cout<<"The number of triplets with gcd=1 is: ";

    cout<<cntdiv[1]<<endl;

    return 0;
}