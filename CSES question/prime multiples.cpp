#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int k;
    cin >> k;
   long long  int prm[k];
  long long int ans = 0;

    for (int i = 0; i < k; i++){
        cin >> prm[i];

    }

//inclusion exclusion principle
    
    int countsetbit=0;
    long  long int temp=n;
     for (int i = 1; i < (1<<k); i++){
      temp=n;
      countsetbit=0;
      for (int j = 0; j< k; j++){

        if(i&(1<<j)){
        countsetbit++;
        temp/=prm[j];
      }
      }
      if(countsetbit&1)
      ans+=temp;
      else
      ans-=temp;
     }

cout<<ans<<endl;
    return 0;
}