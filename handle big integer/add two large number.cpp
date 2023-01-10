
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cout<<"enetr 1st number\n";
    cin>>a;
     cout<<"enetr 2nd number\n";
     cin>>b;
    long long int m,n;
    m=a.size();
    n =b.size();
  
    vector<int>v1;
    vector<int>v2;
    vector<int>ans;
    int cary=0;
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
    for(int j=0;j<min1;j++){
         val=v1[j]+v2[j]+cary;
            ans.push_back(val%10);
                cary=val/10;
    }
    if(m>min1){
    for(int f=min1;f<m;f++){
      val=v1[f]+cary;
            ans.push_back(val%10);
                cary=val/10;
    }

  }
  else if(n>min1){
    for(int l=min1;l<n;l++){
        val=v2[l]+cary;
        ans.push_back(val%10);
        cary=val/10;
    }
   }
        
  while(cary){
      ans.push_back(cary%10);
      cary=cary/10;
  }
   
  reverse(ans.begin(),ans.end());
  for (int i:ans){
      cout<<i;

  }
   return 0;
}