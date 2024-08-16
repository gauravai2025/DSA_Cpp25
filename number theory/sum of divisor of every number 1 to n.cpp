#include<bits/stdc++.h>
using namespace std;

 
int main()
{

int size=1e6+1;
vector<long long int>divs(size,0);


for(int i=1;i<size;i++){
    for(int j=i;j<size;j+=i){   // time complexity n*log(n)
        divs[j]+=i;
    }
}

int n;
cout<<"enter number n:\n";
cin>>n;

for(int i=1;i<=n;i++){
    cout<<i<<" : sum of divisor: "<<divs[i]<<endl;
    // cout<<divs[x]<<endl;
}
    return 0;
}