#include<bits/stdc++.h>
using namespace std;
 int max_occur(int *a,int n){
    int cnt=1;
    int res=0;
    for(int i=1;i<n;i++){
        if(a[res]==a[i])
        cnt++;
        else
        cnt--;
        if(cnt==0){
        cnt=1;
        res=i;
    }
}  
cnt=0;
 for(int i=0;i<n;i++){
        if(a[res]==a[i])
        cnt++;
 }
 if(cnt>n/2)
return a[res];
else
return -1;

 }

int main()
{
cout<<"enter number of element\n";
int n;
cin>>n;
cout<<"enter element of array\n";
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"majority element element:\n";
cout<<max_occur(a,n);

 
 
 
    return 0;
}