#include<iostream>
using namespace std;


    int main()
    { 
        char *p; 
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;
        return 0;
    }
