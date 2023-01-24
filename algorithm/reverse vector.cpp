#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"enter size of vector\n";
    int size ;
    cin>>size ;
    vector<int>v;
    cout<<"enter element of array/n";
    int x;
    for(int i=0;i<size ;i++){
        cin>>x;
    v.push_back(x);
        }
    reverse(v.begin(),v.end());
    for(auto it:v)
    cout<<it<<" ";
   
    return 0;
}