#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<int>ans;

void primefact(ll num){
    ans.push_back(1);
    for(ll i=2;i*i<=num;i++){  // time complexity o(sqrt(n))
        while(num%i==0){
            ans.push_back(i);
            num/=i;

        }
    }

    if(num>1)
    ans.push_back(num);
    
    for(auto it:ans){
        cout<<it<<" ";
    }

}
int main(){
    cout<<"enter number\n";
    ll num;
    cin>>num;
primefact(num);

}