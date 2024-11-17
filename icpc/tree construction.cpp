#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int t;
cin>>t;

while(t--){

    int n,d,l;
    cin>>n>>d>>l;
    int cnt=1;

    int lower=l+d-1;
    int hgh=(l-2)*(d/2)+d+1;

    if(n<lower || n>hgh)
    cout<<-1<<endl;

    else{
    int lf=l;
    vector<vector<int>>branch;
    // leaf complete
    for(int i=2;i<=lf+1;i++){
        branch.push_back({1,i});
        cnt++;
    }

   int numedge=((d+1)/2)-1;

    int st=lf+2;
    
    if(numedge>0){
    branch.push_back({2,st});
    numedge--;
    cnt++;
    }
    // st++;
   while(numedge>0){
    branch.push_back({st,st+1});
    cnt++;
    st++;
    numedge--;
   }  

   int numedge2=(d/2)-2;
   

   for(int i=3;i<=lf+1;i++){

    if(cnt<n){
    branch.push_back({i,st+1});
    cnt++;
    }

    st++;
    for(int i=1;i<=numedge2;i++){
    if(cnt<n){
    branch.push_back({st,st+1});
    st++;
    cnt++;

    }
    
    }

   }
   


    for(auto edges:branch){
        cout<<edges[0]<<" "<<edges[1]<<endl;
    }

    }


}
    
    return 0;
}