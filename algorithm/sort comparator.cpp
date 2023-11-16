#include<bits/stdc++.h>
using namespace std;
 
 // define comparator function for second element of pair in increasing order
bool comp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}

 // define comparator function for second element of pair in decreasing order
bool comp1(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}

 // define comparator function for second element of pair in decreasing order when first element of pair same
bool comp2(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
    return a.second>b.second;
}
else
 return a.first < b.first;
}

 // define comparator function for second element of pair in increasing order when first element of pair same and first element of pair is in decreasing order

 bool comp3(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
    return a.second<b.second;
}
else
 return a.first > b.first;
}

 // define comparator function for second element of pair in increasing order when 2nd element of pair same and first element of pair is in decreasing order

 bool comp4(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
    return a.first>b.first;
}
else
 return a.second < b.second;
}

 // define comparator function for second element of pair in decreasing order when 2nd element of pair same and first element of pair is in incresing order

 bool comp5(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
    return a.first<b.first;
}
else
 return a.second > b.second;
}
   
int main()
{
vector<int>v={5,3,1,2,2,4};
//sort in non decreasing order
sort(v.begin(),v.end());
cout<<"sorted in non decreasing order"<<endl;
for(auto &x:v)
{
    cout<<x<<" ";
}
 cout<<endl;
 int arr[5]={5,3,1,2,2};
 //sort in non decreasing order
sort(arr,arr+5);
cout<<endl<<"sorted in non decreasing order"<<endl;
for(auto &x:arr)
{   cout<<x<<" ";
}

//sort vector  in non increasing order by using functor/ comparator function
sort(v.begin(),v.end(),greater<int>());
cout<<endl<<"sorted in non increasing order"<<endl;
for(auto &x:v)
{
    cout<<x<<" ";
}

cout<<endl;

//sort arr in non increasing order
sort(arr,arr+5,greater<int>());
cout<<endl<<"sorted in non increasing order"<<endl;
for(auto &x:arr)
{
    cout<<x<<" ";
}

cout<<endl;

// sot vector of pair in non decreasing order
vector<pair<int,int>>vp={{1,2},{8,3},{3,4},{3,5},{5,6}};
sort(vp.begin(),vp.end());
cout<<endl<<"sorted in non decreasing order"<<endl;
for(auto &x:vp)
{
    cout<<x.first<<" "<<x.second<<endl;
}

cout<<endl;

 // sot vector of pair in non increasing order
vector<pair<int,int>>vpr={{1,2},{8,3},{3,4},{3,5},{5,5}};
sort(vpr.begin(),vpr.end(),greater<pair<int,int>>());
cout<<endl<<"sorted in non decreasing order"<<endl;
for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}

cout<<endl;

// sort vector of pair in non decreasing order by using comparator function by second element of pair


sort(vpr.begin(),vpr.end(),comp);
cout<<endl<<"sorted in non decreasing order by second element of pair"<<endl;
for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;

// sort vector of pair in decreasing order by using comparator function by second element of pair


sort(vpr.begin(),vpr.end(),comp1);
cout<<endl<<"sorted in  decreasing order by second element of pair"<<endl;
for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;


// sort vector of pair in decreasing order by using comparator function by second element of pair
// when first element of pair is same


sort(vpr.begin(),vpr.end(),comp2);
cout<<" sort vector of pair in decreasing order by using comparator function by second element of pair  when first element of pair is same "<<endl;


for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;


// sort vector of pair in incresing order by using comparator function by second element of pair
// when first element of pair is same and first element of pair is in decreasing order


sort(vpr.begin(),vpr.end(),comp3);
cout<<"sort vector of pair in incresing order by using comparator function by second element of pair when first element of pair is same and first element of pair is in decreasing order "<<endl;


for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;

sort(vpr.begin(),vpr.end(),comp4);

cout<<"sort vector of pair in incresing order by using comparator function by second element of pair when second element of pair is same and first element of pair is in decreasing order "<<endl;
for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;

sort(vpr.begin(),vpr.end(),comp5);

cout<<"sort vector of pair in decreasing order by using comparator function by second element of pair when second element of pair is same and first element of pair is in increasing order "<<endl;
for(auto &x:vpr)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;
return 0;
}