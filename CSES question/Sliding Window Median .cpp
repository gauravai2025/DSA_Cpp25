#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}

multiset<int>mx;
multiset<int>mn;
int left=0;

for(int i=0;i<k;i++){

    if(mx.empty())
    mx.insert(a[i]);

    else{
        if(a[i]>(*(--mx.end())))
        mn.insert(a[i]);
        else
        mx.insert(a[i]);
    }

    if(mn.size()>mx.size()){
        mx.insert(*mn.begin());
        mn.erase(mn.begin());
    }

     if(mx.size()-mn.size()>1){
        mn.insert(*(--mx.end()));
        mx.erase((--mx.end()));
    }
}

cout<<*(--mx.end())<<" ";

for(int i=k;i<n;i++){

    if(mx.find(a[left])!=mx.end())
    mx.erase(mx.find(a[left]));
    else
     mn.erase(mn.find(a[left]));


    // if()
    // mx.insert(a[i]);

    // else{
        if(mx.empty() || a[i]>(*(--mx.end())))
        mn.insert(a[i]);
        else
        mx.insert(a[i]);
    

    if(mn.size()>mx.size()){
        mx.insert(*mn.begin());
        mn.erase(mn.begin());
    }

     if(mx.size()-mn.size()>1){
        mn.insert(*(--mx.end()));
        mx.erase((--mx.end()));
    }
 
 cout<<*(--mx.end())<<" ";
    left++;
}
 
 
    return 0;
}