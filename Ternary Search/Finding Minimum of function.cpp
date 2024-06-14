#include<bits/stdc++.h>
using namespace std;

 double fun(double x){
     return 2*x*x-12*x+7;
 }

 double min_value_of_func(int st,int end){
    int mid1=0;
    int mid2=0;
    double eps=1e-6;

    while(abs(st-end)>eps){
        mid1=st+(end-st)/3;
        mid2=end-(end-st)/3;

        if(fun(mid1)<fun(mid2))
        end=mid2-1;
        else if(fun(mid1)>fun(mid2))
        st=mid1+1;
        else{
        st=mid1+1;
        end=mid2-1;
        }
    }

    return fun(st);
 }

int main()
{
    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;
long long int ans=min_value_of_func(l,r);
// cout<<fixed<<setprecision(11);
cout<<ans<<"\n";
    }

    return 0;
}