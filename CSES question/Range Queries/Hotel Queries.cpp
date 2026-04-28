#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Read hotel room capacities
    vector<int> hotel(n);
    for (int i = 0; i < n; i++) {
        cin >> hotel[i];
    }

    // Read group requirements
    vector<int> group(m);
    for (int i = 0; i < m; i++) {
        cin >> group[i];
    }

    int current_hotel = 0;  // Pointer to the current hotel

    // Process each group
    for (int i = 0; i < m; i++) {
        int found = 0;  // flag to check if hotel is found
        // Iterate from the current hotel onward to find the first valid hotel
        while (current_hotel < n) {
            if (hotel[current_hotel] >= group[i]) {
                hotel[current_hotel] -= group[i];  // assign rooms
                cout << current_hotel + 1 << " ";  // print the 1-based hotel index
                found = 1;
                break;
            }
            current_hotel++;  // move to the next hotel
        }
        
        // If no hotel found, print 0
        if (!found) {
            cout << 0 << " ";
        }
    }

    cout << endl;
    return 0;
}
