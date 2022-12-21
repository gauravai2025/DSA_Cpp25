 #include<iostream>
using namespace std;

int main(){
    
    int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;
}