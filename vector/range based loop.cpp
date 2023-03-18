#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>v={5,7,9};
vector<pair<int,int>>vp={{4,7},{2,8}}; // vector of pair
cout<<"before increment in element\n";
for(int it:v){
    cout<<it<<" ";
} 
cout<<endl;

for(int it:v){
    it++;
} 
cout<<"after increment in element\n";
for(int it:v){
    cout<<it<<" ";
} 
cout<<endl;

for(int &it:v){
    it++;
} 
cout<<"after reference iterator \n";

 for(int it:v){
    cout<<it<<" ";
} 
cout<<endl;

cout<<"vector of pair\n";
 for(pair<int,int> &it:vp){
    cout<<it.first<<" "<<it.second<<endl;
} 
 
 
    return 0;
}