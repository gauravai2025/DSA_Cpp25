
#include<bits/stdc++.h>
using namespace std;



void multply( vector<int>& ans , int n){
     int cary=0;
    int val;
    for(int i=0;i<ans.size();i++){
        val=ans[i]*n+cary;
        cary=val/10;
        ans[i]=val%10;

    }
    while(cary){
        ans.push_back(cary%10);
        cary=cary/10;
    }
    


}
void fact(int num){
     vector<int>ans;
    ans.push_back(1);
for(int i=2;i<=num;i++){
        multply(ans,i);

    }
    reverse (ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it;
    }
}
int main(){
  int num;
    cout<<"enetr number\n";
    cin>>num;
    
    fact(num);
    
    return 0;
}