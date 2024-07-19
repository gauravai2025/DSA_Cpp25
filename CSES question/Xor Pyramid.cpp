#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Initialize result as 0
    int result = 0;

    // XOR pattern based on the position
    for (int i = 0; i < n; ++i) {
        // If n is odd, XOR every element
        // If n is even, XOR every other element
        if ((n - i) % 2 != 0) {
            result ^= a[i];
        }
    }

    cout << result << endl;
    return 0;
}
