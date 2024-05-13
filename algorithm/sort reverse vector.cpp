#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a<b;
}

bool comp1(int a,int b){
    return a>b;
}


int main() {
    cout<<"enter size of vector\n";
    int size ;
    cin>>size ;
    vector<int>v;
    cout<<"enter element of array\n";
    int x;
    for(int i=0;i<size ;i++){
        cin>>x;
    v.push_back(x);
        }

    sort(v.begin(),v.end(),comp);
cout<<"sorted in non decreasing order by using comparator function:\n"<<endl;
    for(auto it:v)
    cout<<it<<" ";
    cout<<endl;
    
    sort(v.begin(),v.end());
cout<<"sorted in non decreasing order using default c++ function\n"<<endl;

  for(auto it:v)
    cout<<it<<" ";
    cout<<endl;

 sort(v.begin(),v.end(),greater<int>());
cout<<"sorted in non increasing order using default c++ function\n"<<endl;
 for(auto it:v)
    cout<<it<<" ";
    cout<<endl;

 sort(v.begin(),v.end(),comp1);
cout<<"sorted in non increasing order by using comparator function:\n"<<endl;
 for(auto it:v)
    cout<<it<<" ";
    cout<<endl;

    return 0;
}