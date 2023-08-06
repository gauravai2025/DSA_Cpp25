#include <iostream>
using namespace std;
class Demo {
        public:
        int a; // 4
        float b; // 4 
        char c; //1   
};

int main() {
        Demo ob1, ob2;
        cout << "size of ob1=" << sizeof(ob1); //  9 expected
        cout << "\n size of ob2=" << sizeof(ob2); //  9 
        cout << "\n size of  class=" << sizeof(Demo); //  9
        return 0;  
}