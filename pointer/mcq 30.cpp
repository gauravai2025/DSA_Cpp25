
#include <iostream>
using namespace std;
int main(){



int arr[]={1,4,5};

//int arr[];   size has to declare input by user
//arr=arr+1   // error address of array cannot be changed
  //  int*ptr=arr++;// address of array cannot be changed arr=arr+1;
    int *p =arr+1;
  //  p=p+1;
    cout<<"address of p:"<<p<<"value at p: "<<*p;
  
    return 0;
}