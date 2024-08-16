#include<bits/stdc++.h>
using namespace std;

class cmp{
    public:
    bool operator()(int a,int b){
        // sorting logic
           // sort descending
        return a>b;

    }
} ;


class cmp1{
    public:
    bool operator()(pair<int,int> a,pair<int,int>b){
        // sorting logic
           // sort descending for vector of pair

           if(a.first==b.first)
          return a.second>b.second;

        return a.first>b.first;

    }
} ;


int main()
{

int n;
cout<<"enter number of element\n";
cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

// descending order sort
sort(arr.begin(),arr.end(),cmp());

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}