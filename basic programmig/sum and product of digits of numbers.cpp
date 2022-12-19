#include<iostream>
using namespace std;
int main(){
int num,sum=0,prd=1;
cout<<"enter number\n";
cin>>num;
while(num>0){
int last=num%10;
sum+=last;
prd*=last;
num=num/10;
}
cout<<prd-sum;
return 0;

}