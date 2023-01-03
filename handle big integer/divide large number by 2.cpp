#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cout<<"enetr number\n";
    cin>>a;
    int size1=a.size();
 vector<int>vn;
 vector<int>ans;
 int val=0;
 for(int i=0;i<size1;i++){
        vn.push_back(a[i]-'0');

    }
   for(int j=0;j<size1;j++){
//     if(j==0){
//     ans.push_back(vn[j]/2);
//     val=10*(vn[j]%2)+vn[j+1];

//    }
//    else{
//     ans.push_back(val/2);
//     val=10*(val%2)+vn[j+1];
//    }
  if(val){
    val=val*10+vn[j];
    ans.push_back(val/2);
    val=val%2;

  }
  else{
    ans.push_back(vn[j]/2);
    val=vn[j]%2;
  }
   }
   for(auto it:ans){
    cout<<it;
   }
    return  0;
}