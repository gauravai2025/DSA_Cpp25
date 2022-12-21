#include<iostream>
using namespace std;


    void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;
    }  
