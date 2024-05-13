#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void input_array_format(vector<int>&arr) {
  
    string input;
    getline(cin, input);
    stringstream ss(input);
    char c;
    // while loop break if c is empty character or null character  
    while (ss >> c) {
        if (c != ',' || c != '[' or c != ']') {
            int num;
            ss >> num;
            arr.push_back(num);
        }
    }
    
}

 void input_space_separated(vector<int>&arr) {
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
   
}

void  input_comma_separated(vector<int>&arr) {
    string input;
    getline(cin, input);
    stringstream ss(input);
    char c;
    while (ss >> c) {
        if (isdigit(c)) {
            int num;
            ss >> num;
            arr.push_back(num);
        }
    }
   
}

void input_array_size_not_given(vector<int>&arr) {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

}

int main() {

    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    vector<int> arr4;

    // Case 1: [1,2,3,4,5] and string input
    input_array_format(arr1);
    cout << "Case 1: [1,2,3,4,5]" << endl;
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    // Case 2: 1 2 3 4 5 and string input
    input_space_separated(arr2);
    cout << "Case 2: 1 2 3 4 5" << endl;
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    // Case 3: 1,2,3,4,5 and string input
    input_comma_separated(arr3);
    cout << "Case 3: 1,2,3,4,5" << endl;
    for (int num : arr3) {
        cout << num << " ";
    }
    cout << endl;

    // Case with size not given and input format is integer
    input_array_size_not_given(arr4);
    cout << "Case with size not given" << endl;
    for (int num : arr4) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}