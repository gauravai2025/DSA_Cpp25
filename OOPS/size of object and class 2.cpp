#include <iostream>
using namespace std;
class Student {
    public:
        int id;
        char name[10];
        char branch[10];
        char section[10];
        int semester;
};

int main() {
    Student s;
    cout << "Size of object: " << sizeof(s) << " bytes" << endl;
    return 0;
}