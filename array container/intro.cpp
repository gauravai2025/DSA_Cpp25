#include <iostream>
#include <array>
using namespace std;
int main() {
    // Declare and initialize a std::array
    array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Access elements
    cout << "Element at index 2: " << myArray[2] << endl;

    // Iterate through the array
    for (const auto& element : myArray) {
        cout << element << " ";
    }

    // Size of the array
    cout << "\nSize of the array: " << myArray.size() << endl;

    cout<<"accessing element using at() function"<<endl;

    cout<<"element at index 2: "<<myArray.at(2)<<endl;
    cout<<"accessing elemnt using indexing operator"<<endl;
    cout<<"element at index 2: "<<myArray[2]<<endl;
    auto it=myArray.begin();
    cout<<*it;
    
    

    return 0;
}
