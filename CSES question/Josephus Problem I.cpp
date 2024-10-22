#include<bits/stdc++.h>
using namespace std;

void solve(int n,int k){

    if(n==0){
     return ;   
    }


    solve(n-1,k);

    cout<<(n+1+k)%n<<" ";
}
 
int main()
{

int n;
cin>>n;

solve(n,2);

 
 
 
    return 0;
}