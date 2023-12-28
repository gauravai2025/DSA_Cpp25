#include <iostream>
#include <vector>
#include <limits>  // for std::numeric_limits
using namespace std;

int main() {
    vector<int> arr;
    int value;

 cout << "Enter a positive integer for the array (or press Enter to stop): ";

    // Take input until the user presses Enter without entering any value
    while (true) {
       
        // Check if the input is empty (only Enter is pressed)
        if (!(cin >> value)) {
            // Clear the input buffer
            cin.clear();
            // Ignore the remaining characters in the buffer, up to the newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

        // Append the entered value to the vector
        arr.push_back(value);
    }

    cout << "Array: \n";

        for (int i : arr) {
            cout << i << " ";
        }

        cout <<endl;
    return 0;
}
