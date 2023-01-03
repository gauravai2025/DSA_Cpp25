#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cout<<"enetr 1st number / larger number\n";
    cin>>a;
     cout<<"enetr 2nd number / smaller number \n";
     cin>>b;
    long long int m,n;
    m=a.size();
    n =b.size();
  
    vector<int>v1;
    vector<int>v2;
    vector<int>ans;
  //  int cary=0;
    int val;
    for(int i=0;i<m;i++){
        v1.push_back(a[i]-'0');

    }
    for(int i=0;i<n;i++){
        v2.push_back(b[i]-'0');

    }
   
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    int min1=min(m,n);
    for(int i=0;i<min1;i++){
        if(v2[i]>v1[i]){
        ans.push_back(v1[i]-v2[i]+10);
        v1[i+1]--;
        }
        else
       
        ans.push_back(v1[i]-v2[i]);
    }
    if(m>min1){
        for(int j=min1;j<m;j++){
            if(v1[j]<0){
                v1[j+1]++;
                ans.push_back(v1[j]+10);
            }
            else
            
            ans.push_back(v1[j]);
        }
    }
reverse(ans.begin(),ans.end());
for(auto it:ans){
    cout<<it;
}

    
    return 0;
}