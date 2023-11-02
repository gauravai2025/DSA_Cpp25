#include<iostream>
using namespace std;

int main() {
int num=1;
switch( 2*num ) {
     case 1: cout << "First" <<endl;
                cout << " First again " <<endl;
                break;

        case 2: switch(num) {
                    case 1: cout<<" Value of num is "<< num <<endl;
                    break;
                 }
                break;

        default: cout << " It is default case" <<endl;        

    }

    cout << endl;
    return 0;
}