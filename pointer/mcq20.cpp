 #include<iostream>
using namespace std;

int main(){
 
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;
    cout << arr << " " << &arr << endl;
}