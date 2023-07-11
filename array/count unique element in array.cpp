#include<bits/stdc++.h>
using namespace std;
 int unique(int a[],int n){
    unordered_set<int>st;
    for(int i=0;i<n;i++){ // time complexity O(n)
        st.insert(a[i]);   // space complexity O(n)
 }
 return st.size();
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