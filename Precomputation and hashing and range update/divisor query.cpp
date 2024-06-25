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

int q;
cout<<"enter number of query ";
cin>>q;
cout<<"enter number to find number of  divisor\n";
int x;
for(int i=0;i<q;i++){
    cin>>x;
    cout<<x<<" : divisor: "<<divs[x]<<endl;
    // cout<<divs[x]<<endl;
}
    return 0;
}