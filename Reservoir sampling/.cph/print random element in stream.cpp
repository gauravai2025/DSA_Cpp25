#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int randomval = arr[0]; // reservoir

        for (int i = 1; i < n; i++) {
            int randomidx = rand() % (i + 1);

            if (randomidx == i) {
                randomval = arr[i];
            }
        }

        cout << randomval << " ";
    }

    return 0;
}