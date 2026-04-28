#include<bits/stdc++.h>
using namespace std;



  void count_divisor(int num){
     vector<int>exp;
     int cnt=0;
     for(int i=2;i*i<=num;i++){ 
        cnt=0; // time complexity o(sqrt(n))
        while(num%i==0){
            cnt++;
            num/=i;

        }
        exp.push_back({cnt});
    }
    if(num>1)
    exp.push_back(1);

    long long int cntdiv=1;
    for(auto it:exp){
        cntdiv*=(it+1);

    }
   
   cout<<cntdiv<<"\n";
  }

int main()
{
    int n;
    cin>>n;
   while(n--){
    int x;
    cin>>x;
    count_divisor(x);
   }
    return 0;
}