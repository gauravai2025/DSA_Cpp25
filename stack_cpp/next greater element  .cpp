#include<bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int>&v){
    stack<int>st;
    vector<int>nge(v.size());
 for(int i=0;i<v.size();i++){
    while(!st.empty()&& v[i]>v[st.top()] ){
        nge[st.top()]=i;
        st.pop();


    }
    st.push(i);

}
while(!st.empty()){
    nge[st.top()]=-1;
    st.pop();
}
return nge;
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
vector<int>nge=NGE(vi);
for(int i=0;i<vi.size();i++){
    cout<<vi[i]<<" "<<(nge[i]==-1 ? -1:vi[nge[i]])<<endl;
}

    return 0;
}