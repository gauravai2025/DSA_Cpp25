#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
     cout << *arr << endl;
    //attention here
    cout << ch << endl;
     cout << *ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;
     
    char *d = &ch[2];
    //prints entire string
    cout << d << endl;
    cout << *d << endl;

    char temp = 'z';
    cout<<temp<<endl;
    char *p = &temp;

    cout << p << endl;
     cout << *p << endl;
    return 0;
}