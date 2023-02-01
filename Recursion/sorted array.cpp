#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}
int main() {
    cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array/n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];}
    

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}