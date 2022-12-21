// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// void print(int *p) {

//     cout << *p << endl; 

// }

// void update(int *p) {

//    // p = p + 1;
//    //cout << "inside "<< p <<endl;
//    *p = *p + 1;

// }
int getSum(int *arr, int n) {
    //int getSum(int arr[], int n) {

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[6] = {1,2,3,4,5,8};
    /*
    int value = 5;
    int *p = &value;
    //print(p);
    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    cout<<"after update<<p<<endl"
    */

    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  // sum of element from 4th element next 3 elements
     cout << "Sum is " << getSum(arr ,3) << endl ;  // sum of element from 1st
  //   element next 3 elements
    cout << "Sum is " << getSum(arr ,6) << endl ;  // sum of element from 1st
  //   element to last  elements

   //cout << "Sum is " << getSum(&arr ,6) << endl ;  address where address of first block of is stored 
  
    return 0;
}