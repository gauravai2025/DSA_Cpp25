#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
    int h,a;
    cin>>h>>a;
    int ans=0;
    vector<bool>visited(3,false);

    while(1){

      if(visited[0]==0){
        h+=3;
        a+=2;
        visited[0]=1;
        visited[1]=0;
         visited[2]=0;
      }

      else {

        if(h<=5)
        break;

    if(visited[1]==0){
      
        if(a>10){
         a-=10;
        h-=5;
        visited[1]=1;
        visited[0]=0;
        visited[2]=0;
           
      }

      else{
    if(visited[1]==0){
      if(h<=20)
      break;
      else{
        h-=20;
        a+=5;
        visited[2]=1;
        visited[0]=0;
        visited[1]=0;
      }
        
      }
    }
    }
      }

      ans++;
    }

 cout<<ans<<endl;
    }
 
 
    return 0;
}