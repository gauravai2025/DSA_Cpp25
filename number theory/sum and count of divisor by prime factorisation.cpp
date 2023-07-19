#include<bits/stdc++.h>
using namespace std;

long long int pow(long long int b,long long int p){
    long long int res=1;
    while(p){
  
  if(p&1)
res*=b;
b*=b;
p=p>>1;
    }
    return res;
}

  void cnt_sum(int num){
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
    for(auto it:exp){
        cntdiv*=((it.second)+1);

    }
    long long sum=1;
    for(auto it:exp){
      long long   int b=it.first;
      long long int p=it.second;
        sum*=(pow(b,p+1)-1)/(b-1);
    }
   cout<<"count of divisor: "<<cntdiv<<"\n";
   cout<<"sum of divisor: "<<sum<<"\n";

  }

int main()
{
cout<<"enter number\n";

    int n;
    cin>>n;
  cnt_sum(n);
 
 
 
    return 0;
}