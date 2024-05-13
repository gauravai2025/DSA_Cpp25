#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
  
    long long int sum=0;
    int size=a.size();
    int lft=0,rgt=0;
    int ans=0;

    while(rgt<size){
        sum+=a[rgt];

        if(sum==k)
        ans=max(ans,rgt-lft+1);
        else if(sum>k){
            while(sum>k){
                sum-=a[lft];
                lft++;
            }
            if(sum==k)
           ans=max(ans,rgt-lft+1);
        }
        rgt++;

    }

    if(ans==0)
     return -1;
     else
    return ans;

}
 
int main()
{

int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
 
vector<int> a(size);
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<size;i++)
cin>>a[i];


int k;
cout<<"Enter the value of k"<<endl;
cin>>k;

cout<<longestSubarrayWithSumK(a,k)<<endl;
 
    return 0;
}