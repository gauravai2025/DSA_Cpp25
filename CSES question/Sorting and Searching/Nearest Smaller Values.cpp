#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<int>ans;
stack<int>st;
st.push(-1);

for(int i=0;i<n;i++){

    while(st.top()!=-1 && arr[st.top()]>=arr[i]){
        st.pop();
    }
     
     if(st.top()==-1)
     ans.push_back(0);
     else
    ans.push_back(st.top()+1);

    st.push(i);
}

for(auto it:ans){
    cout<<it<<" ";
}
 
 
    return 0;
}