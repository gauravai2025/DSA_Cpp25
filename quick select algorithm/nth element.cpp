#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v = {7, 2, 1, 8, 6, 3, 5, 4};

    // Make the 4th element (0-based index) what it would be if sorted in ascending order
    nth_element(v.begin(), v.begin() + 3, v.end());

    cout << "4th smallest element: " << v[3] << endl;

    cout << "Partitioned array: ";

    for (int x : v)
        cout << x << " ";

    cout << endl;
     // Make the 4th element (0-based index) what it would be if sorted in descending order
  // Now, let's find the 4th largest element
    // We can do this by using a custom comparator
    nth_element(v.begin(), v.begin() + 3, v.end(), greater<int>());

    cout << "4th smallest element: " << v[3] << endl;

    cout << "Partitioned array: ";

    for (int x : v)
        cout << x << " ";

    cout << endl;

    return 0;
}