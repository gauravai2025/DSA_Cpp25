#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   long long int t;
   cin>>t;
   while(t--)
   {
      long long int n,m,i,j,total,ans=0;
      cin>>m>>n;
 
      long long int h[m-1],v[n-1];

      for(i=0;i<m-1;++i) 
          cin>>h[i];
 
      for(i=0;i<n-1;++i)
          cin>>v[i];
 
      sort(h,h+m-1,greater<int>());
      sort(v,v+n-1,greater<int>());
 
      i=0;
      j=0;
      
      long long int vertical=1,horizontal=1;
      while(i<m-1 && j<n-1)
      {
          if(h[i]>v[j])
          {
              ans+=h[i]*vertical;
              horizontal++;
              i++;
          }
 
          else
          {
              ans+=v[j]*horizontal;
              vertical++;
              j++;
          }
 
 
      }
 
      total=0;
      while(i<m-1)
      {
          total+=h[i];
          i++;
      }
 
      ans+=total*vertical;
 
      total=0;
      while(j<n-1)
      {
          total+=v[j];
          j++;
      }
 
      ans+=total*horizontal;
 
      cout<<ans<<endl;
 
   }
 
 
     return 0;
}