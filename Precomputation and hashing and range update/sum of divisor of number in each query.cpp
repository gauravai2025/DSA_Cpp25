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

int q;
cout<<"enter number of query n:\n";
cin>>q;

cout<<"enter number: \n";

while(q--){
    int x;
    cin>>x;

    cout<<x<<" : sum of divisor: "<<divs[x]<<endl;
}
    return 0;
}