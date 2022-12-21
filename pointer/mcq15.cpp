#include<iostream>
using namespace std;

int main(){

     
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    return 0;
}