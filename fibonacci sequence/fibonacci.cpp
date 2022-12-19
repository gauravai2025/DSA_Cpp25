#include<iostream>
using namespace std;
int nth_term_value(int num){
int a=0,b=1,next;

    for(int i=2;i<num;i++){
      if(num==1)
      return 0;
      else if(num==2)
      return 1;
  else{
    next=a+b;
    a=b;
    b=next;
  }
    }
  return next;
}
void printfibonacci(int num){
  int a=0,b=1,next;

    for(int i=0;i<num;i++){
      if(i==0)
      cout<<0<<" ";
      else if(i==1)
      cout<<1<<" ";
  else{
    next=a+b;
    a=b;
    b=next;
    cout<<next<<" ";
  }
  
}
}
int main(){
    int n;
    cout<<"enter nth terms\n";
    cin>>n;
   cout<<nth_term_value(n)<<endl;
   printfibonacci(n);
return 0;

 }
