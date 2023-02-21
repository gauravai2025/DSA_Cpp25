#include <iostream>
#include <unordered_set>
using namespace std;
 
int main()
{
    std::unordered_set<int> s = { 1, 2, 3, 4, 5 };
    int key = 3;
 
    if (s.find(key) != s.end()) {
        std::cout << "Element is present in the set" << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }
 
    return 0;
}