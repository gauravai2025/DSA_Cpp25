#include<bits/stdc++.h>
using namespace std;
 void nse(vector<int>&vi , vector<int>&ans,int n){
    stack<int>st;
    st.push(-1);
    for(int i=n-1;i>=0;i--){
      int  curr=vi[i];
      while(st.top()>=curr){
        st.pop();
      }
      ans[i]=st.top();
      st.push(curr);
    }

       
 }  

int main()
{
 cout<<"enter number of element in array\n";
int num;
cin>>num;
cout<<"enter element of array\n";
vector<int>vi(num);
for (int  i = 0; i < num; i++)
{
    cin>>vi[i];
}
vector<int>ans(num);
 nse(vi,ans,num);
 for(auto it:ans){
    cout<<it<<" ";
 }
 
    return 0;
}