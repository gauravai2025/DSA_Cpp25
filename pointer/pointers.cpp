#include<bits/stdc++.h>
using namespace std;
int main(){
     string num="5";
     string *ptr=&num;
    int *p=0;
    cout<<"address of operator : "<<&num<<endl;
    cout<<"value at ptr/ address of num : "<<*ptr<<endl;
    cout<<"value / content of ptr or address of num : "<<ptr<<endl;
    cout<<"value / content of p or address of null pointer"<<p<<endl;
   
    double d = 4.3;
    double *p2 = &d;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;



    return 0;
}
 

