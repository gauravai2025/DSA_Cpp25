#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of values
    
    set<int> distinctValues;  // Set to store distinct values
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;  // Read each value
        distinctValues.insert(x);  // Insert the value into the set
    }
    
    cout << distinctValues.size();  // Output the number of distinct values
    return 0;
}
