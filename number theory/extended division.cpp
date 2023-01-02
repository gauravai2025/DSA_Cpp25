
#include<bits/stdc++.h>
using namespace std;
class exteuclidtriplet{
    public:
    long long int x;
    long long int gcd;
    long long int y;
};
exteuclidtriplet gcdexttriplet(long long int a,long long int b){
    if(b==0){
        exteuclidtriplet base;
        base.gcd=a;
        base.x=1;
        base.y=0;
        return base;
    }
    else{
        exteuclidtriplet temp=gcdexttriplet(b,a%b);
         exteuclidtriplet ans;
         ans.gcd=temp.gcd;
         ans.x=temp.y;
         ans.y=temp.x-a/b*temp.y;
         return ans;
    }

}
int main() {
    long long int a;
    long long int b;
    cout<<"enter two number\n";
    cin>>a>>b;
  exteuclidtriplet ans = gcdexttriplet(max(a,b),min(a,b));
  cout<<"value of x: "<<ans.x<<endl;
  cout<<" value of y: "<<ans.y;
    return 0;
}