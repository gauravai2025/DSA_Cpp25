
#include <iostream>
using namespace std;
int main(){
int *ptr=0;  // null pointer null address
int a=8;
int num=9;
ptr=&num;   //update address of ptr
*ptr=a;
cout<<*ptr;
cout<<num;


    
  
    return 0;
}