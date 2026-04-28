#include<bits/stdc++.h>
using namespace std;

void divisor(int num,vector<int>&div){

    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            div[i]++;
            if(i!=num/i)
            div[num/i]++;
        }
    }

}
 
int main()
{
int n;
cin>>n;
int mx=0;
vector<int>div(1e6+1,0);
int x;

for(int i=0;i<n;i++){
    cin>>x;
    mx=max(mx,x);
  divisor(x,div);
}

for(int gcdp=mx;gcdp>=1;gcdp--){
    
 if(div[gcdp]>1){
cout<<gcdp<<endl;
return 0;
 }

 }
 
 
    return 0;
}