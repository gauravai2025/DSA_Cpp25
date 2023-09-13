#include<bits/stdc++.h>
using namespace std;

int main()
{
cout<<"enter size of vector\n";
int n;
cin>>n;
vector<int>ans(n);  // vector of size n
cout<<"enter element of vector\n";
for(int i=0;i<n;i++){
    cin>>ans[i];
}
 sort(ans.rbegin(), ans.rend());
    cout<<"reverse sorted vector is\n";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}