

// ### Problem Description

// You are given an array `A` of `N` positive integers. Your task is to count the number of pairs of indices `(i, j)` such that:

// i < j
// and

// A_i + A_j >= A_i*A_j

// In other words, a pair of elements is considered **valid** if the sum of the two elements is greater than or equal to their product.

// ### Input Format

// * The first line contains an integer `T`, the number of test cases.
// * For each test case:

//   * The first line contains an integer `N`, the size of the array.
//   * The second line contains `N` integers `A₁, A₂, ..., Aₙ`.

// ### Output Format

// For each test case, print the **number of valid pairs** `(i, j)` satisfying:

// [
// i < j \quad\text{and}\quad A_i+A_j\ge A_i\times A_j
// ]

// ### Example

// **Input**

// ```text
// 3
// 4
// 1 2 3 4
// 5
// 1 1 2 2 3
// 4
// 2 2 2 3
// ```

// **Output**

// ```text
// 3
// 7
// 3
// ```

// ### Explanation

// For the first array:

// `A = [1, 2, 3, 4]`

// Valid pairs are:

// * `(1,2)` → `1 + 2 ≥ 1 × 2` → `3 ≥ 2` ✅
// * `(1,3)` → `1 + 3 ≥ 1 × 3` → `4 ≥ 3` ✅
// * `(1,4)` → `1 + 4 ≥ 1 × 4` → `5 ≥ 4` ✅

// All other pairs are invalid.

// Therefore, the answer is **3**.

// ### Important Observation

// For **positive integers**, the condition
// x+y>= xy

// is satisfied only when:

// * `x = 1` or `y = 1`, or
// * `x = 2` and `y = 2`.

// So the problem can be solved by simply counting the number of `1`s and `2`s.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (x == 1) c1++;
        else if (x == 2) c2++;
    }

    long long ans = c1 * n - c1 * (c1 + 1) / 2;
    ans += c2 * (c2 - 1) / 2;

    cout << ans << '\n';

    return 0;
}