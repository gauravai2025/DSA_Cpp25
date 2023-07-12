#include<bits/stdc++.h>
using namespace std;
 pair<int,int> occur(int*a,int size,int val){
     int *frst=lower_bound(a,a+size,val);
    int *last=upper_bound(a,a+size,val);
    if(frst==last)
    return {-1,-1};
    else{
        return {frst-a,last-a-1};
    
    }
 }
int main()
{
  int size;
  cout<<"enter size of array\n";
  cin>>size;
  int a[size];
    cout<<"enter  element of array in sorted order"<<"\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"enter element to find last and first occurence\n";
    int val;
    cin>>val;
   pair<int,int>ans=occur(a,size,val);
   cout<<ans.first<<" "<<ans.second;

 
 
 
    return 0;
}