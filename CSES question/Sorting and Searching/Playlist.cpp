#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;

vector<int>arr(n,0);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

map<int,int>mp;

int ans=0;
int left=0,right=0;

while(right<n){
    mp[arr[right]]++;

    if(mp.size()==right-left+1){
        ans=max(ans,right-left+1);
    }

    else if(mp.size()<right-left+1){

        while(mp.size()<right-left+1){
            mp[arr[left]]--;
            if(mp[arr[left]]==0)
            mp.erase(arr[left]);
            left++;
        }

     ans=max(ans,right-left+1);

    }

        right++;

}

//  if(mp.size()==right-left+1){
//         ans=max(ans,right-left+1);
//     }

cout<<ans<<endl;
    return 0;
}