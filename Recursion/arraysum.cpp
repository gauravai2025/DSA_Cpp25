#include<iostream>
using namespace std;

int getSum(int *arr, int size) {
    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

//     int remainingPart = getSum(arr+1, size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
return arr[0]+getSum(arr+1,size-1);
}

int main() {

    cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array/n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}