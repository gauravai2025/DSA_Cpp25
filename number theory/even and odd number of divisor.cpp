#include<bits/stdc++.h>
using namespace std;



  void cnt_div(int num){
     vector<pair<int,int>>exp;
     int cnt=0;
     for(int i=2;i*i<=num;i++){ 
        cnt=0; // time complexity o(sqrt(n))
        while(num%i==0){
            cnt++;
            num/=i;

        }
        exp.push_back({i,cnt});
    }
    if(num>1)
    exp.push_back({num,1});
    long long int cntdiv=1;
    long long int oddcntdiv=1;

    for(auto it:exp){
        cntdiv*=((it.second)+1);
        if((it.first)&1)
        oddcntdiv*=((it.second)+1);
        else
        oddcntdiv*=1;

    }
   
   cout<<"total count of divisor: "<<cntdiv<<"\n";
    cout<<"odd count of divisor: "<<oddcntdiv<<"\n";
     cout<<"even count of divisor: "<<cntdiv-oddcntdiv<<"\n";

  }

int main()
{
cout<<"enter number\n";
    int n;
    cin>>n;
  cnt_div(n);
    return 0;
}