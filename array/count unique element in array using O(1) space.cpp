#include<bits/stdc++.h>
using namespace std;
 int unique(int a[],int n){
     sort(a,a+n); // time complexity O(n.log(n))
     int cnt=1;
    for(int i=0;i<n;i++){ 
        if(a[i]!=a[i+1])
        cnt++;   // space complexity O(1)
 }
 return cnt;
 }
int main()
{
    cout<<"enter size of array"
;
int n;
cin>>n;
int a[n];
cout<<"enter element of array\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<unique(a,n)<<endl;
 
 
 
    return 0;
}