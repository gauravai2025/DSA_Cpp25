#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int size,q;
cin>>size>>q;
long long int a[size];
for(int i=0;i<size;i++){
    cin>>a[i];
}
vector<long long int>presm(size+1);
presm[0]=0;

for(int i=0;i<size;i++){
 presm[i+1]=presm[i]+a[i];
     }
while(q--){
int l,r;
cin>>l>>r;
cout<<presm[r]-presm[l-1]<<endl;
}
    return 0;
}