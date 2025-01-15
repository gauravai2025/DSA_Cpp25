#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum sum path
int maxSumPath(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    // Prefix sums for both arrays
    vector<int> prefixA(n, 0), prefixB(m, 0);
    prefixA[0] = a[0];
    prefixB[0] = b[0];

    for (int i = 1; i < n; i++) {
        prefixA[i] = prefixA[i - 1] + a[i];
    }

    for (int i = 1; i < m; i++) {
        prefixB[i] = prefixB[i - 1] + b[i];
    }

    int i = 0, j = 0; // Pointers for both arrays
    int preva = -1, prevb = -1; // Indices of the previous intersection points
    int result = 0; // Maximum sum result

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            // Intersection point found
            int sumA = preva == -1 ? prefixA[i] : prefixA[i] - prefixA[preva];
            int sumB = prevb == -1 ? prefixB[j] : prefixB[j] - prefixB[prevb];

            result += max(sumA, sumB);

            preva = i; // Update previous intersection points
            prevb = j;

            i++;
            j++;
        }
    }

     int sumA = 0;
     int sumB = 0;

    // // Add the remaining elements of array `a` if any
   sumA = preva == -1 ? prefixA[n - 1] : prefixA[n - 1] - prefixA[preva];
        

    // Add the remaining elements of array `b` if any
        sumB = prevb == -1 ? prefixB[m - 1] : prefixB[m - 1] - prefixB[prevb];
  
     
    result += max(sumA, sumB);

    return result;
}

int main() {
    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        // Calculate and print the maximum sum
        cout << maxSumPath(a, b) << "\n";
    }

    return 0;
}
