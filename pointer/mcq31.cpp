#include <iostream>
using namespace std;
int main(){

char a[]="abs";
char*ptr=a;
cout<<a<<endl;
cout<<ptr[0]<<endl;
cout<<ptr<<endl;
char *p=&a[2];
cout<<'a'+1<<endl;  // integer output of sum ascii value
cout<<p-ptr<<endl;

int b[]={3,5,6,7};
int *ptr1=b;
int*p1=&b[3];
cout<<p1-ptr1;
  
    return 0;
}