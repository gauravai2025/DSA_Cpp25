#include<iostream> 
using namespace std;
#define a 1000000007
int factorial(int n){
   long long  int fact=1;
    for(long long int i=1;i<=n;i++){
        fact*=i;
        fact=fact%1000000007;
    }
return fact;
}
int main(){
  long long int n;
  cin>>n;
    cout<<factorial(n)<<endl;
  
  return 0;

}