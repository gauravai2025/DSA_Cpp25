#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 cout<<"enter size of vetor\n";
    int size ;
    cin>>size ;
    vector<int>arr(size);
    cout<<"enter element of vector\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
cout<<"enter element to find \n";
int val;
cin>>val;
 auto cnt=find(arr.begin(),arr.end(),val); // find number and return its iterator   in whole vector
if(cnt==arr.end())
cout<<"not present\n";
else
cout<<" present: "<<(*cnt)<<endl;

  auto cnt1=find(arr.begin()+1,arr.end(),val);// find number and return its pointer  from second element to last element
if(cnt1==arr.end())
cout<<"not present\n";
else
cout<<" present: "<<(*cnt1)<<endl;
 
 
 
    return 0;
}