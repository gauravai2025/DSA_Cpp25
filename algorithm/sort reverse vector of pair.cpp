#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b){
    if (a.first==b.first)
    return a.second<b.second;
    else
    return a.first<b.first;
}

bool comp1(pair<int,int>a,pair<int,int>b){
  if (a.first==b.first)
    return a.second>b.second;
    else
    return a.first>b.first;
}

 
int main()
{
    vector<pair<int,int>>v={{2,4},{2,3},{5,3},{7,8},{9,1}};
    //sort in non decreasing order
    sort(v.begin(),v.end());
    cout<<"sorted in non decreasing order using default c++ function"<<endl;
    for(auto &x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   cout<<endl;


    sort(v.begin(),v.end(),comp);
    cout<<"sorted in non decreasing order using comparator function"<<endl;
    for(auto &x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   cout<<endl;

    sort(v.begin(),v.end(),greater<pair<int,int>>());
    cout<<"sorted in non increasing order using default comparator function in c++"<<endl;
    for(auto &x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   cout<<endl;

    sort(v.begin(),v.end(),comp1);
    cout<<"sorted in non increasing order using comparator function"<<endl;
    for(auto &x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
   cout<<endl;
    return 0;
}