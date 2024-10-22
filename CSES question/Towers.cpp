#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;

multiset<int>tophgt;

while(n--){

  int x;
  cin>>x;

  if(tophgt.empty())
  tophgt.insert(x);

  else{
    auto it=tophgt.upper_bound(x);

    if(it!=tophgt.end())
    tophgt.erase(it);

    tophgt.insert(x);
  }

}
 
 cout<<tophgt.size()<<endl;
 
 
    return 0;
}