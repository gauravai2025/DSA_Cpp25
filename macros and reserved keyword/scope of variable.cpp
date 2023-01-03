
#include <iostream>
using namespace std;

int i=9;
int b=i;
void f1(){
    cout<<i<<endl;
    cout<<b<<endl;
}
int main() {
    int i=6;
    {
        int i=5;
        cout<<i<<endl;
        cout<<b<<endl;
    }
    cout<<i<<endl;
     cout<<b<<endl;
    f1();
 

    return 0;
}