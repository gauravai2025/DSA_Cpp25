#include<bits/stdc++.h>
using namespace std;

 
int main()
{

int size=1e6+1;
vector<int>divs(size,0);


for(int i=1;i<size;i++){
    for(int j=i;j<size;j+=i){   // time complexity n*log(n)
        divs[j]++;
    }
}

int n;
cout<<"enter number n:\n";
cin>>n;

for(int i=1;i<=n;i++){
    cout<<i<<" : count of divisor: "<<divs[i]<<endl;
    // cout<<divs[x]<<endl;
}
    return 0;
}